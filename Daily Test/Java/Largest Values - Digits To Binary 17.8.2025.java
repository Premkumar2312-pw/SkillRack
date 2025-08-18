import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int res = 0;
        for (int i = 0; i < n.length(); i++) {
            int d = n.charAt(i) - '0';
            String b = Integer.toBinaryString(d);
            String t = n.substring(0, i) + b + n.substring(i+1);
            int num = Integer.parseInt(t);
            res = Math.max(res, num);
        }
        System.out.println(res);
    }
}