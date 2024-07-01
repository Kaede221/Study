@echo off
@REM 先介绍循环结构吧

@REM 创建临时文件夹
mkdir Test

@REM /d表示遍历目录，*表示文件夹名称
@REM 不会遍历文件
for /d %%a in (*) do echo %%a

@REM 可以配合判断，删除文件夹
for /d %%a in (*) do if %%a==Test rmdir %%a

dir