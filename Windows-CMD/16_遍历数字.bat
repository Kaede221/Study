@echo off
@REM 相当于range了
@REM (开始数据，步长，最后的数字)
@REM 注意这里要使用/L操作符
for /L %%v in (1, 1, 20) do echo %%v