#!/bin/bash
rm -rf ./build
mkdir ./build
cd ./build
cmake ../../src
make

cd ..
rm -rf ./settelments-editor
mkdir ./settlements-editor
mkdir ./settlements-editor/bin/
cp ./build/settlements ./settlements-editor/bin/
mkdir ./settlements-editor/DEBIAN/
cp ./debian-manifest/control ./settlements-editor/DEBIAN/control
mkdir ./settlements-editor/etc/
cp ../cities.db3 ./settlements-editor/etc
dpkg-deb --root-owner-group --build settlements-editor
rm -rf ./settlements-editor
