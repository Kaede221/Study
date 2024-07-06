import java.util.Scanner;

public class StringPlusOperateTest {
    /* 字符串的加操作 小练习
     * */
    public static void main(String[] args) {
        // 比如可以获取一个三位数的各个位数
        Scanner sc = new Scanner(System.in);
        System.out.println("输入一个三位数");
        int num = sc.nextInt();
        // 开始获取位数
        int n1 = num % 10;
        int n2 = num / 10 % 10;
        int n3 = num / 100 % 10;
        System.out.println("百位数: " + n3);
        System.out.println("十位数: " + n2);
        System.out.println("个位数: " + n1);
    }
}
