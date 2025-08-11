import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),p=sc.nextInt();
        while(n-->0){
            int x=sc.nextInt(),y=sc.nextInt();
            if(p==x)p=y;
            else if(p==y)p=x;
        }
        System.out.print(p);
    }
}