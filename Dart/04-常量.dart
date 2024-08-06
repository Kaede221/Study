// 常量有两种定义方法
// 一种是const 一种是final

void main(List<String> args) {
  // 变量张是这个样子的
  var str = "Hello World";
  print(str);

  //变量可以修改
  str = "You edited this";
  print(str);

  //常量 就是const
  const PI = 3.1415926;
  //使用还是一样的
  print(PI);

  //但是我们无法修改
  // PI = 3; Can't assign to the const variable 'PI'.

  //另外一个关键词 final
  //使用和const基本一样
  final Rand = 0.5;
  print(Rand);

  // Rand = 0.6; The final variable 'Rand' can only be set once.
  // 这里的报错信息不一样, final的意思是只能赋值一次, 所以报错了

  //有什么区别呢?
  // final是一个运行时的常量, 使用前才初始化
  // 但是const是运行前的常量
  // 简单说, 就是你有一碗饭, final是饭做好了, 给你加点料
  // const就是一开始给你加点料, 然后做好饭

  //比如我要获取时间
  final t = DateTime.now();
  print(t);

  //final可以运行
  //但是const就不行了
  // const t2 = DateTime.now(); he constructor being called isn't a const constructor.
}
