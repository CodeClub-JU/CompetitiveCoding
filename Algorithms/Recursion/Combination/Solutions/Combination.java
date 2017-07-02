import java.io.*;
class Combination{
    
    private static int combination(int n,int r){
        if(n==r)
            return 1;  //nCn=1
        else if(r==0)
            return 1;  //nC0=1
        else if(r==1)
            return n;  //nC1=n
        else
            return (combination(n-1,r-1)+combination(n-1,r));  //nCr=(n-1)C(r-1)+(n-1)Cr
    }
    
    public static void main(String args[])throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the value of n : ");
        System.out.println();
        int n=Integer.parseInt(br.readLine());
        System.out.println();
        System.out.println(" Enter the value of r : ");
        System.out.println();
        int r=Integer.parseInt(br.readLine());
        System.out.println();
        System.out.println(" nCr : " + combination(n,r));
    }
}