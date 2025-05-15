import java.util.Scanner;

public class StringAlignment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S1 = sc.nextLine();
        String S2 = sc.nextLine();
        sc.close();

        int maxLen = Math.max(S1.length(), S2.length());

        for (int i = 0; i < maxLen; i++) {
            char c1 = (i < S1.length()) ? S1.charAt(i) : ' ';
            char c2 = (i < S2.length()) ? S2.charAt(i) : ' ';

            if (c1 == ' ' && c2 == ' ') System.out.println("**");
            else if (c1 == ' ') System.out.println(c2 + "*");
            else if (c2 == ' ') System.out.println(c1 + "*");
            else System.out.println("" + c1 + c2);
        }
    }
}