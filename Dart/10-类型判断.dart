// 这里使用一个is关键字
void main(List<String> args) {
  // 假设存在这样一个看不出来类型的东西
  var str = 1234;

  // 就可以通过is判断
  if (str is String) {
    print("it is string");
  } else if (str is int) {
    print("it is int");
  }
}
