if (Test-Path build) {
    Remove-Item -Recurse -Force build
}

New-Item -ItemType Directory build
cd build
cmake -DCMAKE_PREFIX_PATH=D:\Qt\5.11.3\msvc2017_64 ../../src
cmake --build . --config Release
cd ..

if (Test-Path release) {
    Remove-Item -Recurse -Force release
}
New-Item -ItemType Directory release

Copy-Item -Path ./build/Release/settlements.exe -Destination ./release

Copy-Item -Recurse -Path ./qt-dll/* -Destination ./release
Copy-Item -Path ../cities.db3 -Destination ./release