import java.util.*;
class Kangaroo{
    
    public static void main(String args[]) {
        Scanner ob=new Scanner(System.in);
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the values of x1, v1, x2 and v2 : ");
        System.out.println();
        int x1=ob.nextInt();
        int v1=ob.nextInt();
        int x2=ob.nextInt();
        int v2=ob.nextInt();
        System.out.println();
        String temp=((v1>v2)&&((x2-x1)%(v2-v1)==0))?"YES":"NO";  // ternary operator
        System.out.println(temp);
    }
}