import java.util.*;
class Main{
    public static void main(String[]z){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),x=sc.nextInt()%4;
        int[][] m=new int[n][n],t=new int[n][n];
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)m[i][j]=i*n+j+1;
        while(x-->0){
            for(int i=0;i<n;i++)for(int j=0;j<n;j++)t[i][j]=m[n-j-1][i];
            for(int i=0;i<n;i++)m[i]=Arrays.copyOf(t[i],n);
        }
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++)a+=m[0][j];
        for(int i=0;i<n;i++)b+=m[i][n-1];
        for(int j=0;j<n;j++)c+=m[n-1][j];
        for(int i=0;i<n;i++)d+=m[i][0];
        char w='A';int mx=a;
        if(b>mx){mx=b;w='B';}
        if(c>mx){mx=c;w='C';}
        if(d>mx){mx=d;w='D';}
        System.out.print(w+" "+mx);
    }
}