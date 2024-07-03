//注释就不说了吧?就是你看到的这些汉字,不会被运行的

//这里的public class就是关键字
/* 对于关键字来说
 * 一般会高亮显示
 * 字符都是小写的
 * */

//这里的class就是类,是一切的根本 class可以定义一个类 大括号就是类的范围
public class HelloWorld {
    //这个叫做main方法,是程序的主入口
    public static void main(String[] args) {
        // 这个自然就是输出语句了
        System.out.println("Hello World");
    }
}
/*
 * 注释可以有多行的
 * 中间可以换行
 * 前面的*只是为了美观
 * */

//这里要注意,多行注释不能嵌套
//以为开始结尾不能确认,存在歧义
//所以为了方便,单行多行注释都不要嵌套比较好