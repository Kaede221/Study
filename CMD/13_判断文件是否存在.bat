@echo off
@REM 直接用if判断就好
if exist a.txt (
    echo File Get
) else (
    echo No such file
)

@REM 一条语句最好写在同一行，上面的是因为括号跨行，所以才没报错