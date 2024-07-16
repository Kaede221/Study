@echo off
REM 演示if else结构 判断字符串是否为规定的字符串
set v=Hello
REM 这里的等号左右不能有空格，容易出问题
if %v%==Hello (
    echo OK
) else (
    echo No
)

@REM 可以给一个 >nul，让他没有输出的内容

pause>nul