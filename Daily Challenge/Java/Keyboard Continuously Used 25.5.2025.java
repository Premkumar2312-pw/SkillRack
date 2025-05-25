import java.util.*;
public class Main {
    public static boolean contains(String row, char ch) {
        return row.indexOf(ch) != -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next(), b = sc.next(), c = sc.next(), s = sc.next();
        int[] ml = new int[3];
        int cr = -1, count = 0;
        for(char ch : s.toCharArray()) {
            boolean found = false;
            for(int i = 0; i < 3; i++) {
                String row = (i == 0 ? a : (i == 1 ? b : c));
                if(contains(row, ch)) {
                    count = (cr == i) ? count + 1 : 1;
                    cr = i;
                    ml[i] = Math.max(ml[i], count);
                    found = true;
                    break;
                }
            }
            if(!found) {
                cr = -1;
                count = 0;
            }
        }
        int m = Math.max(ml[0], Math.max(ml[1], ml[2]));
        if(m < 2) System.out.println("-1");
        else {
            if(ml[0] == m) System.out.println(a);
            if(ml[1] == m) System.out.println(b);
            if(ml[2] == m) System.out.println(c);
        }
    }
}