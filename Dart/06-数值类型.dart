void main(List<String> args) {
  // 其实就是int, 只有整数
  int a = 20;
  print(a);

  // 还有浮点数类型
  double b = 23.5;
  print(b);

  //上面 整型无法设置为浮点数
  // a = 20.1;

  //但是反过来可以 因为小范围可以属于大范围
  b = 20;
  print(b);

  //加减乘除和其他语言一样
  print(a + b);
  print(a - b);
  print(a / b);
  print(a * b);
  // 取余也是一样的
  print(a % b);
}
