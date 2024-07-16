@echo off
@REM bat也是可以接收参数的

@REM 这里我们直接使用一个单个的%，后面加上第几个参数就好
@REM 比如下面这个，直接运行: 06_... 12 23
echo %1
echo %2

@REM 应该就会输出12 13了
pause