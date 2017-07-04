import java.util.*;

public class Balanced_Brackets {
    
    public static void main(String args[]){
        Scanner ob=new Scanner(System.in);
        int i=0,j=0,c=0,flag=0;
        Stack<Character> s=new Stack<Character>();
        String x=ob.next();
        flag=0;
        for(i=0;i<x.length();i++){
            char y=x.charAt(i);
            if((y=='(')||(y=='{')||(y=='['))
                s.push(y);
            else if((y==')')||(y=='}')||(y==']')){
                if(s.isEmpty()){
                    flag=1;
                    break;
                }
                else if(((y==')')&&(s.peek()!='('))||((y=='}')&&(s.peek()!='{'))||((y==']')&&(s.peek()!='['))){
                    flag=1;
                    break;
                }
                else
                    s.pop();
            }
        }
        if((flag==0)&&(s.isEmpty()))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
