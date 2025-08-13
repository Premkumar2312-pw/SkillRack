import java.util.*;
class M{
    public static void main(String[]a){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();String t="";int c=0;
        for(char ch:s.toCharArray()){
            t+=ch;c+=ch=='('?1:-1;
            if(c==0){System.out.println(t);t="";}
        }
    }
}