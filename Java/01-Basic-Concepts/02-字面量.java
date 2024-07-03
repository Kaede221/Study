/* 字面量
 * 其实就是告诉程序
 * 一个数据在代码中的类型
 * 比如整数 小数 字符串 字符 布尔 空
 * */

public class Test {
    public static void Special() {
        //特殊符号
        //制表符 可以让上下文自动补齐空格,但是后面的空格不会管
        System.out.println("===分割线===");
        System.out.println("Name" + "\t" + "Age");
        System.out.println("Kaede" + "\t" + "18");

        //还有反斜杠
        System.out.println("Hi" + "\\" + "Kaede");
    }

    public static void main(String[] args) {
        // 66就是整数类型,Helloworld就是字符串类型 A就是字符类型
        System.out.println(123);
        //一样的整数
        System.out.println(-90);
        //小数
        System.out.println(3.1415926);
        //字符串
        System.out.println("Hello, K");
        //布尔
        System.out.println(true);
        System.out.println(false);
        //空
        //不能直接打印,会报错的,只能通过字符串的方式进行打印
        System.out.println("null");

        Special();
    }
}