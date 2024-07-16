@echo off
@REM 可以启动一个新的窗口
start "This is the new title"

@REM 也可以直接让start一个文件，这里不演示了

@REM 可以使用/B参数，直接在本控制台中继续运行其他的程序
start /B echo hello