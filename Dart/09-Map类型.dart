// 其实就是类似于json对象的东西
void main(List<String> args) {
  // 假设这里我要创建一个学生对象
  // 注意, 这里的name age必须有引号, 否则报错
  var student = {
    "name": "Kaede",
    "age": 20,
    "favorite": ['sing', 'jump', 'rap']
  };
  print(student);

  // 访问里面的数据, 和JS一样
  // 但是不能使用点, 只能和数组一样使用key来访问
  print(student['name']);

  // 还有一种定义方法, 就是使用new关键字
  var person = new Map();

  // 赋值就是使用key
  person['name'] = 'Kaede';
  person['age'] = 18;

  // 这里倒是和Python很像
  print(person);
}
