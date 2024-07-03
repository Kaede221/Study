//有固定的定义方法
//类型 变量名 = 数据
//这里是单文件程序,所以class名称不一定和文件名一样
public class Vars {
    public static void main(String[] args) {
        //定义变量
        int num1 = 10;
        double num2 = 20.0;

        //输出的时候直接使用变量就好
        System.out.println(num1);
        System.out.println(num2);

        //变量可以参与计算
        System.out.println(num1 * num2);

        //变量名称不能重复哦
        //变量在使用之前一定需要赋值
        //而且还需要注意变量的作用范围

        //一条语句可以定义多个变量
        int a = 100, b = 200, c = 300;
        System.out.println("a = " + a + ", b = " + b + ", c = " + c);

        //定义变量和变量赋值建议一起写,不然不方便查找修改
    }
}