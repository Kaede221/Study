public class DataType {
    public static void main(String[] args) {
        /* 简单说的话
         * 就是四个大类
         * 整数 浮点数 字符 布尔
         * byte, short, int, long
         * float, double
         * char
         * boolean
         * */

        //byte类型 是-128~127
        byte a = 127;
        System.out.println(a);
        short s = 20;
        System.out.println(s);
        int i = 30;
        System.out.println(i);

        // 对于long数据,最好后面加一个L
        // 这样子就不会报错了
        long l = 210000000000000L;
        System.out.println(l);

        //float也是有后缀的
        float f = 3.14159F;
        System.out.println(f);

        // double没有
        double d = 10;
        System.out.println(d);

        // char是单个字符
        char c = '中';
        System.out.println(c);

        //布尔自然就是真假了
        boolean b = true;
        System.out.println(b);
    }
}