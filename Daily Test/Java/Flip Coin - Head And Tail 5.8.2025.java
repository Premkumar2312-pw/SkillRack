import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),h=0,t=0;
        int[] a=new int[n];
        for(int i=0;i<n;i++) a[i]=sc.nextInt();
        char f=sc.next().charAt(0);
        for(int x:a){
            if(x%2>0) f=(f=='H'?'T':'H');
            if(f=='H') h++; else t++;
        }
        System.out.print(h+" "+t);
    }
}