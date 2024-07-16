@echo off
@REM 其实就是换了一个操作符而已

@REM 这里先当前目录
@REM 这里的%%v就是变量，var的意思，其他的也是可以的
for /r "./" %%v in (*.txt) do echo %%v

@REM 其他的都是一样的，这里就不演示哩