import java.util.*;
class Main{
    public static void main(String[] a){
        Scanner sc=new Scanner(System.in);
        if(!sc.hasNext()) return;
        String s=sc.next(); List<String> subs=new ArrayList<>();
        while(sc.hasNext()) subs.add(sc.next());
        int n=subs.get(0).length();
        List<String> parts=new ArrayList<>();
        for(int i=0;i<s.length();i+=n) parts.add(s.substring(i,i+n));
        for(String sub:subs)
            for(int i=0;i<parts.size();i++)
                if(parts.get(i).equals(sub)){ System.out.println(i+1); break; }
    }
}