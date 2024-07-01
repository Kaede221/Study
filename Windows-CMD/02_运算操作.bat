@echo off
@REM Bat是可以进行计算操作的

@REM 但是我们必须要用一个\A

@REM 下面这个东西，一般你是看不到内容的
set /a 1 + 2

@REM 所以这里我们使用一个变量进行储存
set /a var = 1 + 2

@REM 然后我们可以用两个%包裹起来，这样就可以读取到里卖弄的值了
echo %var%

set /a var = 2 * 3
echo %var%

set /a var = 10 / 2
echo %var%

set /a var = 10 * (3 - 2)
echo %var%