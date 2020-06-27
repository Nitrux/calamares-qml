#!/bin/bash

apt-get --yes update
apt-get --yes install wget gnupg2

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
