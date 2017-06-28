import java.io.*;
class Coin_Change{
    
    private static int coin_change(int arr[],int n,int k){
        if(k==0)
            return 1;
        else if(n<0)
            return 0;
        else if(k<0)
            return 0;
        else
            return (coin_change(arr,n,k-arr[n])+coin_change(arr,n-1,k));
    }
    
    public static void main(String args[])throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the number of coins (n) : ");
        System.out.println();
        int n=Integer.parseInt(br.readLine());
        System.out.println();
        System.out.println(" Enter the value of K : ");
        System.out.println();
        int K=Integer.parseInt(br.readLine());
        System.out.println();
        System.out.println(" Enter the worth of each coin : ");
        System.out.println();
        int[] a=new int[n];
        int i=0;
        for(i=0;i<n;i++)
            a[i]=Integer.parseInt(br.readLine());
        System.out.println();
        System.out.println(coin_change(a,n-1,K));
    }
}