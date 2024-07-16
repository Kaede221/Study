@echo off
@REM 可以通过一些运算符，把输出的内容 保存为一个新的文件

@REM 就是 >> 和 >

@REM 下面这个命令会保存到一个a.txt文本里面
echo Hello World >> a.txt

@REM 然后这个命令，会显示文本里面的内容
type a.txt

@REM 如果使用单个的尖括号，会直接复写其中的内容
echo New Things > a.txt
type a.txt