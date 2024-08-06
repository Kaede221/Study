void main(List<String> args) {
  // 字符串有很多种定义方法
  var str1 = "This is a string";
  var str2 = 'Again but with single one';
  print(str1);
  print(str2);

  // 虽然var可以自动推断, 但是还是建议string
  String str3 = "Normal string";
  print(str3);

  // 你甚至可以多个单引号
  String str4 = '''
WOW
Now you can write 多行
其实和Python没啥区别
  ''';
  print(str4);

  // 字符串的拼接
  String str5 = "Hello, ";
  String str6 = "User";

  // 这里注意下面, 我么可以在字符串中使用美元符号 和Python差不多
  print("$str5$str6");
  //或者加号也是可以的
  print(str5 + str6);
}