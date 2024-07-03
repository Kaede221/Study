//需要导包 卸载class的上面

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        // 可以获取输入的内容
        // 这样就可以方便的操作了
        // 创建对象
        Scanner sc = new Scanner(System.in);
        System.out.println("输入一个整数");
        // 接收数据
        int i = sc.nextInt();
        System.out.println("Input: " + i);
    }
}