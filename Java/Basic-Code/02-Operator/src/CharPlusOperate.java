public class CharPlusOperate {
    /*
     * 字符的加操作
     * char
     * 注意, 字符没有减乘除的操作
     * */
    public static void main(String[] args) {
        char c = 'c';
        // 这里字符加数字, 会自动使用ASCII表对照
        // 字符运算, 都会使用数字进行运算
        // a是97 A是65, 这两个记住就好
        System.out.println(c + 1);
        // 下面这个虽然是字符, 但是后面是字符串, 所以是拼接操作
        System.out.println('c' + "abc");
    }
}
