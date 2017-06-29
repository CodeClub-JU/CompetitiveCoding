import java.util.*;
class Reverse{
    
    public static void main(String args[]){
        Scanner ob=new Scanner(System.in);
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the value of n : ");
        System.out.println();
        int n=ob.nextInt();
        System.out.println();
        System.out.println(" Enter the n elements of the array : ");
        System.out.println();
        int i=0;
        int[] a=new int[n];
        for(i=0;i<n;i++)
            a[i]=ob.nextInt();
        System.out.println();
        System.out.println(" The elements of the array in reverse order : ");
        System.out.println();
        for(i=n-1;i>=0;i--)
            System.out.print(a[i]+" ");
    }
}