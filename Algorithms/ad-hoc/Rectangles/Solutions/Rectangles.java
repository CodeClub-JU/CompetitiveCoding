import java.util.*;

class Rectangles{

	public static void main(String args[]){
		Scanner ob=new Scanner(System.in);
		int n=ob.nextInt();
		int i=1,cnt=0,ans=0;
		while(i<=n){
			ans+=(n/i);
			if(n>=i*i)
				cnt++;
			i++;
		}
		ans+=cnt;
		ans/=2;
		System.out.println(ans);
	}
}