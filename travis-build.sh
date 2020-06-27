#!/bin/bash

set -x

apt-get --yes update
apt-get --yes install wget gnupg2

### Add Focal Repository to update packages
wget -qO /etc/apt/sources.list.d/ubuntu-focal-repo.list https://raw.githubusercontent.com/Nitrux/iso-tool/master/configs/files/sources.list.focal
apt-get --yes update
apt-get --yes install libyaml-cpp-dev libpython3.8-dev libboost-python1.71-dev

### Remove Focal Repository

rm /etc/apt/sources.list.d/ubuntu-focal-repo.list 

### Install Dependencies
apt-get --yes update
apt-get --yes dist-upgrade
DEBIAN_FRONTEND=noninteractive apt-get --yes install devscripts lintian build-essential automake autotools-dev equivs keyboard-configuration console-setup
mk-build-deps -i -t "apt-get --yes" -r

### Build Deb
mkdir source
mv ./* source/ # Hack for debuild
cd source
debuild -b -uc -us
