import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(), x=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i-1;j++) System.out.print("*");
            System.out.println(x++);
        }
        for(int i=x+n-1;i>=x;i--) System.out.print(i);
        System.out.println(); x+=n;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++) System.out.print("*");
            System.out.println(x++);
        }
    }
}