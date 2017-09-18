set fltkinc=C:\Users\user\Desktop\fltk\fltk-1.3.4-1
%fltkinc%\build\bin\Release\fluid.exe -c app.fl
cl main.cpp %fltkinc%\build\lib\Release\*.lib *.obj /I %fltkinc% advapi32.lib comdlg32.lib ole32.lib shell32.lib wsock32.lib user32.lib gdi32.lib /MD /Fe Honkinator.exe
