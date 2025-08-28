import java.util.*;

class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String[] a=new String[n];
        for(int i=0;i<n;i++) a[i]=sc.next();
        int s=sc.nextInt();
        for(int i=0;i<n;i++){
            if(a[i].contains("*")){
                for(int d=0;d<=9;d++){
                    String t=a[i].replace("*",String.valueOf(d));
                    int x=Integer.parseInt(t),sum=0;
                    for(int j=0;j<n;j++){
                        if(j==i) sum+=x;
                        else sum+=Integer.parseInt(a[j].replace("*","0"));
                    }
                    if(sum==s){a[i]=t;break;}
                }
            }
        }
        for(String x:a) System.out.print(x+" ");
    }
}