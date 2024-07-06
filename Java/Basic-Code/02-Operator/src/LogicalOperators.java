public class LogicalOperators {
    /*
     * 逻辑运算符
     * */
    public static void main(String[] args) {
        // 其实就是与或非异或
        // 异或就是如果相同为false, 不同为true

        // 或者
        System.out.println(true | false);

        // 并且
        System.out.println(true & false);

        // 非
        System.out.println(!false);

        // 异或
        // 这个用的少, 了解就好
        System.out.println(true ^ false);

        // 逻辑运算中, 是存在短路逻辑的
        // 如果在或中, 前面一个条件成立了, 那么后面的条件就不会再次运行检测
        // 短路或 || 短路与 &&
        int num = 1;
        System.out.println(true || ++num == 2);
        // 你可以看到, num没有发生变化
        System.out.println(num);
        System.out.println(false || ++num == 2);
        // 这个时候, 就会发现运行成功了
        System.out.println(num);

        num = 1;
        // 与也是一样的
        System.out.println(false && ++num == 1);
        System.out.println(num);
        // 普通的与, 不管前面怎么样, 每个条件都会运算
        // 所以效率比较低
        System.out.println(false & ++num == 1);
        System.out.println(num);
    }
}
