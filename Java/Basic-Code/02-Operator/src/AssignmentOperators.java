public class AssignmentOperators {
    /*
     * 赋值运算符
     * */
    public static void main(String[] args) {
        // 最常见的就是=了, 还有其他的, 比如+=, -=, *=, /=
        // 就不多说了, 就是自己经过操作后再赋值而已
        // 下面是演示, 自己看看咯
        int num = 10;

        num += 10;
        System.out.println(num);

        num -= 5;
        System.out.println(num);

        num *= 3;
        System.out.println(num);

        num /= 2;
        System.out.println(num);

        num %= 3;
        System.out.println(num);

        // 这个东西底层有一个强制的类型转换
        // 转成什么, 要看左边的变量类型
        // 反正是肯定可以成功的一种运算
    }
}
