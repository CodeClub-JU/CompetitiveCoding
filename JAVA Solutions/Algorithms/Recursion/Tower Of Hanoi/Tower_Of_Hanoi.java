import java.io.*;
class Tower_Of_Hanoi
{
    
    private static void transfer(int n,char from,char to,char temp){
        if(n>0){
            transfer(n-1,from,temp,to);
            System.out.println(" Move disk "+n+" from "+from+" to "+to);
            transfer(n-1,temp,to,from);
        }
    }
    
    public static void main(String args[])throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("\u000C");  // clears the terminal
        System.out.println(" Enter the number of disks : ");
        System.out.println();
        int n=Integer.parseInt(br.readLine());
        System.out.println();
        transfer(n,'A','C','B');
    }
}