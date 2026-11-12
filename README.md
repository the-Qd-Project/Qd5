# the Qd Project

Welcome to the Qd Project!

The Qd project is an independent, unofficial fork of Qt-based on a fork of Qt 5.15.19 with additional modifications, created to breathe new life into legacy applications.

## Our Objectives

* Keeping legacy Qt5 applications alive while preserving their frameworks
* Including KDE Frameworks
* Importing the KDE Qt Patch Collection released by KDE in 2021
* Bringing Wayland support to the core
* and more!

## How do I compile it?

```bash
./configure -prefix $PWD/qtbase -opensource -confirm-license

make

make install
```
