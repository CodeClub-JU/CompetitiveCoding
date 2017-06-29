import java.util.*;
class Simple_Array_Sum{
    
    public static void main(String args[]){
        Scanner ob=new Scanner(System.in);
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the value of n : ");
        System.out.println();
        int n=ob.nextInt();
        System.out.println();
        System.out.println(" Enter the n elements of the array : ");
        System.out.println();
        int i=0,r=0;
        int[] a=new int[n];
        for(i=0;i<n;i++)
            a[i]=ob.nextInt();
        System.out.println();
        System.out.println(" The sum of the elements : ");
        System.out.println();
        for(i=0;i<n;i++)
            r=r+a[i];
        System.out.println(r);
    }
}