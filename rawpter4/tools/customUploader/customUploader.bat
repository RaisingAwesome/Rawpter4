@echo off
echo === Custom Uploader ===
echo Arguments received:
echo %*
echo -----------------------
echo Working...
echo rfp-cli.exe -d RA -t com -port %1 -s 115200 -file "%2" -verify -p
rfp-cli.exe -d RA -t com -port %1 -s 115200 -file "%2" -verify -p
echo Complete. See above for results.
exit /b 0

