import java.util.Scanner;

public class If {
    // 介绍 if 的相关用法
    public static void main(String[] args) {
        //if就是如果
        //格式为 if(条件){语句}
        //比如我现在要录入一个数据, 判断与10的大小关系
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入一个数据");
        int num = sc.nextInt();

        //使用流程控制语句
        if (num > 10) {
            //大于10的话就会执行这里的代码, 否则就不会执行
            System.out.println("num > 10");
        }

        // 如果if条件, 只有一句话的话, 那么大括号是可以省略不写的
        // 但是定义变量 a = 10; 这种是不行的, 因为这里面其实是两句代码
        // 建议是正常都写上, 不要省略, 否则不宜阅读
        if (num > 0) System.out.println("num > 0");

        // 条件判断, 绝对注意等号的数量, 一个的话叫做赋值运算, 永远都是true的
        // 意思就是你赋值成功了
        boolean flag = false;
        if (flag == true) {
            System.out.println(num);
        }
        // 一般, 括号里面直接写变量就好, 可以避免意外
        if (flag) {
            System.out.println("False, 不会执行");
        }
    }
}
