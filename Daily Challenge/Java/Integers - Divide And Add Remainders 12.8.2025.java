import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),a[]=new int[n],k=sc.nextInt(),i,j;
        for(i=0;i<n;i++)a[i]=sc.nextInt();
        for(i=0;i<k;i++)for(j=k;j<n;j++)a[j]+=a[j]%a[i];
        for(int x:a)System.out.print(x+" ");
    }
}