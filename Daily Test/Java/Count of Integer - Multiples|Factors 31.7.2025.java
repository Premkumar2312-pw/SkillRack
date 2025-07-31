import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),a[]=new int[n],c=0;
        for(int i=0;i<n;i++)a[i]=sc.nextInt();
        for(int i=0;i<n;i++){
            boolean f=false;
            for(int j=0;j<n;j++)
                if(i!=j && (a[i]%a[j]==0||a[j]%a[i]==0)){f=true;break;}
            if(f)c++;
        }
        System.out.print(c);
    }
}