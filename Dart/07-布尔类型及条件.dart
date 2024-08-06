void main(List<String> args) {
  //真真假假 假假真真
  // true或者false 不多说了吧
  bool flag = true;
  print(flag);

  flag = false;
  print(flag);

  //这里和C++不一样, 不能给一个布尔设定数据
  // flag = 10; 这并不是真

  // 顺便就把条件判读写了, 和JS是一样的
  // 三元运算符正常使用
  // print(flag ? "Yes" : "No");

  // if (flag) {
  //   print("true");
  // } else {
  //   print("false");
  // }

  // 这里可以看看 同一个数据, 类型不同会怎么样
  // 这里要注意, dart不会自动类型转换的, 所以类型不同 肯定不同
  print("123" == 123 ? "Yes" : "No");
}
