import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        for (int i = 0; i < s.length(); i++) {
            char m = s.charAt(i);
            int cnt = 0;
            for (int j = i; j < s.length(); j++) {
                if (s.charAt(j) == m) cnt++;
            }
            System.out.print(m + "" + cnt + " ");
        }
    }
}