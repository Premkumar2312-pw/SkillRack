import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine().trim();
        String s2 = sc.nextLine().trim();
        String s3 = sc.nextLine().trim();
        int n = s1.length();
        int h = 0;
        for (int i = 0; i < n; i++) {
            int d1 = s1.charAt(i) - '0';
            int d2 = s2.charAt(i) - '0';
            int d3 = s3.charAt(i) - '0';
            h = Math.max(h, d1 + d2 + d3);
        }
        for (int r = 1; r <= h; r++) {
            StringBuilder l = new StringBuilder();
            for (int i = 0; i < n; i++) {
                int d1 = s1.charAt(i) - '0';
                int d2 = s2.charAt(i) - '0';
                int d3 = s3.charAt(i) - '0';
                if (r <= d1)
                    l.append('*');
                else if (r <= d1 + d2)
                    l.append('-');
                else
                    l.append('*');
            }
            System.out.println(l.toString());
        }
        sc.close();
    }
}