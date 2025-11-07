import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next().trim();
        int len = s.length();
        for(int idx = 0; idx < len; idx++) {
            char ch = s.charAt(idx);
            int b = -1;
            for(int k = idx + 1; k < len; k++) {
                if(s.charAt(k) == ch) {
                    b = k;
                    break;
                }
            }
            if(b != -1) {
                System.out.println(s.substring(idx, b + 1));
            } else {
                break;
            }
        }
    }
}