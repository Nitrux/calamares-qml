### Calamares-qml: The Calamares installer but in QML.
---------

[![Build Status](https://travis-ci.org/Nitrux/calamares-qml.svg?branch=master)](https://travis-ci.orgNitrux/calamares-qml)

### Dependencies

Main:
* Compiler with C++14 support: GCC >= 5 or Clang >= 3.5.1
* CMake >= 3.3
* Qt >= 5.9
* yaml-cpp >= 0.5.1
* Python >= 3.3 (required for some modules)
* Boost.Python >= 1.55.0 (required for some modules)
* KDE extra-cmake-modules >= 5.18 (recommended; required for some modules;
  required for some tests)
* KDE Frameworks KCoreAddons (>= 5.58 recommended)
* PythonQt (optional, deprecated)

Modules:
* Individual modules may have their own requirements;
  these are listed in CMake output. Particular requirements (not complete):
* *fsresizer* KPMCore >= 3.3
* *partition* KPMCore >= 3.3
* *users* LibPWQuality (optional)

# Issues
If you find problems with the contents of this repository please create an issue.

©2020 Nitrux Latinoamericana S.C.
