import java.io.*;
class Bubble_Sort{
	
	public static void main(String args[])throws IOException{
		System.out.println("\u000C");  // clears the terminal
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println(" Enter the size of the array : ");
		int n=Integer.parseInt(br.readLine());
		System.out.println();
		System.out.println(" Enter the elemens of the array : ");
		System.out.println();
		int i=0,j=0;
		int[] arr=new int[n];
		for(i=0;i<n;i++)
			arr[i]=Integer.parseInt(br.readLine());
		for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		System.out.println();
		System.out.println(" The elements of the array after sorting : ");
		System.out.println();
		for(i=0;i<n;i++)
			System.out.println(arr[i]);
	}
}