#!/bin/bash

apt update
apt -qq -yy install curl git

### Install Dependencies
apt -qq -yy dist-upgrade
DEBIAN_FRONTEND=noninteractive apt -qq -yy install devscripts lintian build-essential automake autotools-dev equivs keyboard-configuration console-setup
mk-build-deps -i -t "apt-get --yes" -r

### Build Deb
mkdir source
mv ./* source/ # Hack for debuild
cd source
debuild -b -uc -us
