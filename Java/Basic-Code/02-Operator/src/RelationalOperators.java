import java.util.Scanner;

public class RelationalOperators {
    /*
     * 关系运算符
     * 其实就是一种判断用的运算符
     * 比如大于小于等于不等之类的
     * */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("输入两个整数");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        // 所有的类型运算符, 结果都是布尔类型的
        System.out.println(num1 > num2);
        System.out.println(num1 == num2);
        System.out.println(num1 < num2);
    }
}
