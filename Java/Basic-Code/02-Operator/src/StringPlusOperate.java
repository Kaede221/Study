public class StringPlusOperate {
    /* 字符串的加操作
     * */
    public static void main(String[] args) {
        // 如果+操作中出现字符串, 那么会自动变成拼接操作
        // 比如下面这个, +就变成字符串的连接符号了
        System.out.println("123" + 123);

        // 连续的+操作, 就是从左到右了
        // 所以下面会正常进行加法操作 10Kaede
        System.out.println(1 + 9 + "Kaede");

        // 其他的数据也是一样的
        System.out.println(3.1415 + " -> PI");
        System.out.println("Kaede" + true);
        // 1不能直接+true, 但是可以借助字符串
        System.out.println(1 + "" + true);

        // 变量的话就没啥说的了, 其实都是一样的
        // 是的, 字符串的定义是大写的String哦 其实这是一个单独的类
        String name = "Kaede";
        System.out.println("My name is " + name);

        // 从左到右依次运算
        // 后面开始就是字符串的拼接了, 前面就是正常的运算
        System.out.println(1 + 3 + " - " + 3 + 1);
    }
}
