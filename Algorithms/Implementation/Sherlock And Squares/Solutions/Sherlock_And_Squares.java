import java.util.*;
class Sherlock_And_Squares{
    
    public static void main(String args[]) {
        Scanner ob=new Scanner(System.in);
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the values of A and B : ");
        System.out.println();
        int A=ob.nextInt();
        int B=ob.nextInt();
        System.out.println();
        int x=(int)Math.ceil(Math.sqrt(A));
        int y=(int)Math.floor(Math.sqrt(B));
        int c=y-x+1;
        System.out.println(c);
    }
}