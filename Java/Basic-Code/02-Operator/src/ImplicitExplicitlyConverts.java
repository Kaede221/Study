public class ImplicitExplicitlyConverts {
    // 在这里介绍隐式转换和显式转换相关的内容
    public static void main(String[] args) {
        // 对于数据来说, 如果数据类型不一样的话, 是需要转换以后再进行运算的
        // 隐式转换就是把取值范围小的转换为取值范围大的
        // 强制转换, 显式转换就是变为范围小的

        // 隐式转换还有一个名字叫做 自动类型提升
        /*
         * 他会把一个取值范围小的数据转换为取值范围大的数据
         * 不需要手动写代码
         * byte short int long float double
         * */
        int a = 10;
        double b = a;
        // 你可以看到, 自动提升为10.0了
        System.out.println(a + ", " + b);
        // 注意, byte short char类型, 运算时, 都会转换为int后计算
        byte b1 = 10;
        byte b2 = 20;
        System.out.println(b1 + b2);

        int num1 = 10;
        long num2 = 100L;
        double num3 = 20.0d;
        // 这上面三个数据相加 数据类型就是double了
        // 先是long, 再double
        System.out.println(num1 + num2 + num3);

        // 强制转换, 就是直接设置类型
        // 比如我可以这样子
        int num4 = (int) num3;
        System.out.println(num4);
        // 但是可能导致数据混乱 比方说用8L的水, 放入1L的瓶子里面
    }
}
