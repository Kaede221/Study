import java.util.Scanner;

public class ArithmeticTest {
    public static void main(String[] args) {
        /* 小练习
         * 输入一个三位数, 拆分为个位十位百位, 输出在控制台中
         * */
        System.out.println("输入一个三位数");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        /* 这里有一个公式
         * 想要得到多少位 就除以1000...多少, 再%10就好
         * */
        System.out.println(num / 100 % 10 + "-" + num / 10 % 10 + "-" + num % 10);
    }
}
