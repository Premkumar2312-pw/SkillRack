import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Set<Character> st = new HashSet<>();
        for(char c:s.toCharArray()) st.add(c);
        if(st.size()!=2){ System.out.print("NO"); return; }
        int n=s.length();
        for(int i=1;i<=(n-1)/2;i++){
            if(s.substring(0,i).equals(s.substring(n-i))){
                char c1=s.charAt(0), c2=s.charAt(i);
                boolean ok=true;
                for(int j=0;j<i;j++) if(s.charAt(j)!=c1) ok=false;
                for(int j=i;j<n-i;j++) if(s.charAt(j)!=c2) ok=false;
                if(c1==c2) ok=false;
                if(ok){ System.out.print("YES"); return; }
            }
        }
        System.out.print("NO");
    }
}