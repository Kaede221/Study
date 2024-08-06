void main(List<String> args) {
  //变量 可以像C++一样, 使用类型来创建变量
  int num1 = 10;

  // 输出变量也是直接使用就好
  print(num1);

  // 或者使用var关键字, 这个和TS很像
  // 这里没有类型设置, 所以会自动推断类型
  var num2 = 20;
  print(num2);

  // 或者使用类型关键字来定义
  // 比如我要定义一个字符串
  //这里的String是一个类型哦
  String str = "Hello";
  print(str);

  // 这里注意, 单引号双引号貌似没有严格的区分
  String str2 = 'Kaede';
  print(str2);

  //或者var也可以定义字符串
  var str3 = "Hi";
  print(str3);

  //注意, 类型一旦确认, 不能修改类型(这里没有和Python学坏 挺好的)
  // str3 = 123; A value of type 'int' can't be assigned to a variable of type 'String'.

  //同时 这个东西没有自动类型转换, 存在一个类型校验的
  // String str4 = 1234;
}
