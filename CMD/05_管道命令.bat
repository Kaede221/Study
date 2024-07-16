@echo off
@REM 管道命令，可以把一个命令的输出，给到另外一个命令的输入

@REM 比如dir可以列举文件，我就把列举的东西作为输出，给到find函数，找到所有符合规则的文件
dir | find ".txt"

@REM 也可以用在其他的地方，反正都是一样的
netstat -an | find "ESTABLISHED"