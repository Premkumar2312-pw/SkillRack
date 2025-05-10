import java.util.Scanner;

public class Main {
    public static boolean isPalindrome(String s) {
        int len = s.length();
        for (int i = 0; i < len / 2; i++) {
            if (s.charAt(i) != s.charAt(len - i - 1))
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] words = new String[n];
        for (int i = 0; i < n; i++) {
            words[i] = sc.next();
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    String combined = words[i] + words[j];
                    if (isPalindrome(combined)) {
                        System.out.println(combined);
                        sc.close();
                        return;
                    }
                }
            }
        }
        System.out.println("-1");
        sc.close();
    }
}