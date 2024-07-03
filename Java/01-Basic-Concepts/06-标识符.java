public class Test {
    public static void main(String[] args) {
        /* 标识符
         * 其实就是变量的名称之类的东西
         * 基本都是要符合一定的规范的
         * 比如数字不能打头, 特殊符号不能开头
         * */
        //注意 下划线和dollar符号都是可以开头的
        int _num = 10;
        int $num = 20;
        System.out.println(_num + $num);

        // 方法, 变量建议使用小驼峰命名法myName
        // 类, 使用大驼峰, 就是MyName这样子
    }
}