import java.util.Scanner;

public class IfDemo {
    // 实现一个If的小程序
    // 输入一个数据, 根据数据的大小 输出不同的内容
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("输入一个数据:");
        int num = sc.nextInt();
        if (num > 10){
            System.out.println("num > 10");
        }else{
            System.out.println("num <= 10");
        }
    }
}
