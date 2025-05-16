import java.util.Scanner;
class ReverseNumber{
    static int numrev(int num){
        int reverse=0;
        while(num>1){
            int rem = num%10;
            reverse=reverse*10 + rem;
            num/=10;
        }
        return reverse;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("ENTER A NUMBER: ");
        int num = sc.nextInt();
        int rev = numrev(num);
        System.out.println("THE ORIGINAL NUMBER : "+num);
        System.out.println("THE REVERSED NUMBER : "+rev);
        sc.close();
    }
}