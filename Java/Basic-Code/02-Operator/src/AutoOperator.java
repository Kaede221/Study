public class AutoOperator {
    /* 自增自减运算符
     * */
    public static void main(String[] args) {
        // 其实就是num = num + 1的简写
        int num = 1;
        System.out.println(num);
        num++;
        System.out.println(num);

        // 其实也可以放在前面, 放在前面的意思就是先自增, 再运算
        System.out.println(++num + 1);
        System.out.println(num);
        // 这个就是先运算, 后增加
        System.out.println(num++ + 1);
        System.out.println(num);

        // --也是一样的, 就是变成减少一个而已
        System.out.println(--num);
        // 所以我们可以写出来这样的东西
        System.out.println(num++ + --num);
    }
}
