import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] m = {{1,2,3},{4,5,6},{7,8,9}};
        String s = sc.next();
        int sec = 0;
        int[][] dir = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,0},{1,-1},{1,1}};
        for (int k = 1; k < s.length(); k++) {
            int di=0,dj=0,x=0,y=0;
            for (int i=0;i<3;i++) {
                for (int j=0;j<3;j++) {
                    if (m[i][j]==s.charAt(k)-'0'){di=i;dj=j;}
                    if (m[i][j]==s.charAt(k-1)-'0'){x=i;y=j;}
                }
            }
            boolean f = true;
            if (di==x && dj==y) continue;
            for (int[] d: dir) {
                if (di+d[0]==x && dj+d[1]==y){sec++;f=false;}
            }
            if (f) sec+=2;
        }
        System.out.println(sec);
    }
}