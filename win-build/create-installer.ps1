if (Test-Path temp) {
    Remove-Item -Recurse -Force temp
}
New-Item -ItemType Directory temp
cd temp

Copy-Item -Recurse ../release/* -Destination .

candle ../settlements-installer.wxs
light settlements-installer.wixobj

if (Test-Path ../release-installer) {
    Remove-Item -Recurse -Force ../release-installer
}
New-Item -ItemType Directory ../release-installer

Copy -Path ./settlements-installer.msi -Destination ../release-installer
cd ..
Remove-Item -Recurse -Force temp