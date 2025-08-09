import java.util.*;
class Main{
    public static void main(String[] a){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int x=1;x<=n;x++){
            int s=x*x-(x-1)*2;
            for(int i=s;i<=x*x;i+=2) System.out.print(i+" ");
            System.out.println();
        }
    }
}