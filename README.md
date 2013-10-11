ofxWatchdog
===========

A process watchdog timer for openFrameworks applications.<br/>
You can watch your application's hang-up, illegal memory access,<br/>
illegal instruction, segmentation fault, zero devide, abort (uncaught C++ exception).<br/>
Then exit safely or reboot application.<br/>
<br/>
Only one function to use:<br/>
<br/>
o ofxWatchdog::watch(int msec, bool reboot, bool override, bool verbose)<br/>
<br/>
Optionally you can use:<br/>
<br/>
o ofxWatchdog::clear(void)<br/>
<br/>
Development environment:<br/>
o MacOS X 10.7.5 + Xcode 4.6.2 + of 0.8.0 osx<br/>
o MacOS X 10.8.5 + Xcode 5.0 + of 0.8.0 osx<br/>
o (not tested) MacOS X 10.8.5 + Xcode 4.6.0 + of 0.8.0 osx<br/>
<br/>
<br/>
2013/10/11<br/>
Maybe fix all bugs.<br/>
I changed the design to use execv() function.<br/>
Supports doc-icon optimization, inherites boot arguments, inherites environment variables.<br/>
Returns correct exit status.<br/>
