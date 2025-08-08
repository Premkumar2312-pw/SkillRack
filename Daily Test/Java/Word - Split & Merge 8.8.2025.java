import java.util.*;
class Main{
    public static void main(String[] a){
        Scanner sc=new Scanner(System.in);
        String s[]=sc.nextLine().split(" ");
        int k=sc.nextInt()-1;String w=s[k];int l=w.length(),m;
        if(l%2){m=(l-1)/2;w=w.substring(m)+new StringBuilder(w.substring(0,m+1)).reverse();}
        else{m=l/2-1;w=w.substring(m+1)+new StringBuilder(w.substring(0,m+1)).reverse();}
        s[k]=w;System.out.println(String.join(" ",s));
    }
}