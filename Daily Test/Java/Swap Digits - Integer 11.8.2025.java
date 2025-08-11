import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String n=sc.next();
        int q=sc.nextInt();
        char[] a=n.toCharArray();
        while(q-->0){
            int x=sc.nextInt(),y=sc.nextInt();
            char t=a[x-1]; a[x-1]=a[y-1]; a[y-1]=t;
        }
        String r=new String(a);
        if(r.equals(n)) System.out.print("YES");
        else System.out.print(Integer.parseInt(r)*2);
    }
}