import java.util.Scanner;

public class HoleCount {
    static int hole(char d) {
        if (d == '0' || d == '4' || d == '6' || d == '9') return 1;
        if (d == '8') return 2;
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            String s = Integer.toString(i);
            int count = 0;
            for (char c : s.toCharArray()) count += hole(c);
            if (count >= s.length()) System.out.print(i + " ");
        }
        sc.close();
    }
}