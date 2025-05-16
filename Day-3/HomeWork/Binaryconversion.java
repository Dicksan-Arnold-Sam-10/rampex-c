import java.util.Scanner;
class Binaryconversion{
    static String convertor(int num){
        String str = Integer.toString(num,2);
        
        return str;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.print("enter a number: ");
        num = sc.nextInt();
        num = Integer.parseInt(convertor(num));
        System.out.println(num);
        sc.close();
    }
}