
public class ArithmeticOperators {
    /* 算数运算符学习
     * 在这里介绍了一些基础运算符的使用
     * */
    public static void main(String[] args) {
        // +
        System.out.println(1 + 5);
        // -
        System.out.println(7 - 9);
        // *
        System.out.println(6 * 6);

        // 计算的时候如果有小数参与, 那么自动结果就是小数了
        // 下面这个等于2.1100000000000003
        // 有可能会出现不精确的情况(涉及到存储格式, 这里不解释了)
        System.out.println(1.1 + 1.01);

        // 整数运算, 只能得到整数
        System.out.println(10 / 3);
        // 如果想要有小数, 则必须有小数
        // 但是可能不精确
        System.out.println(10.0 / 3);

        // 还有一种运算可以取余数
        System.out.println(10 % 3);
        System.out.println(10 % 2);
    }
}
