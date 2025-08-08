import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),a[]=new int[100],f=0;
        for(int i=0;i<n;i++)a[i]=sc.nextInt();
        for(int i=0;i<n-2;i++)
            for(int j=i+1;j<n-1;j++)
                for(int k=j+1;k<n;k++)
                    if(a[j]-a[i]==a[k]-a[j]){System.out.println(a[i]+" "+a[j]+" "+a[k]);f=1;}
        if(f==0)System.out.print(-1);
    }
}