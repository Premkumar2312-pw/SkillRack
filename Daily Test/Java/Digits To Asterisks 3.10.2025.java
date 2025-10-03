import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int len = n.length(), s = 0, maxc = 0;
        int[] c = new int[len];
        for(int i=0;i<len;i++) {
            c[i]=n.charAt(i)-'0';
            if(c[i]>maxc) maxc=c[i];
        }
        String[] m = new String[maxc];
        Arrays.fill(m, "");
        for(int i=0;i<len;i++) {
            if(i>0) s+=c[i-1];
            int d = s - m[c[i]-1].length();
            StringBuilder sb = new StringBuilder(m[c[i]-1]);
            for(int z=0;z<d;z++) sb.append("-");
            for(int z=0;z<c[i];z++) sb.append("*");
            m[c[i]-1] = sb.toString();
        }
        for(int i=maxc-1;i>=0;i--) {
            StringBuilder sb = new StringBuilder(m[i]);
            for(int z=0;z<(s-m[i].length());z++) sb.append("-");
            System.out.println(sb);
        }
    }
}