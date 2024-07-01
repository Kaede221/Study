@echo off

@REM 我们可以创建新的目录
mkdir Test

@REM 也可以移除这个目录
rmdir /S /Q Test

@REM 或者创建多个目录嵌套
@REM mkdir \Test\a\b\c

@REM cd命令可以改变当前的目录
cd ..