import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s1=sc.next(),s2=sc.next();
        int d=0,m=0,i=0;
        for(int j=0;j<s1.length();j++){
            d += s1.charAt(j)=='(' ? 1 : -1;
            if(d>m){ m=d; i=j; }
        }
        System.out.print(s1.substring(0,i+1)+s2+s1.substring(i+1));
    }
}