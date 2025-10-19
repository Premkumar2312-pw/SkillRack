import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine().trim();
        String b = sc.nextLine().trim();
        String c = sc.nextLine().trim();
        String d = sc.nextLine().trim();
        int w = 1;
        for (int i = 1; i < a.length() + c.length(); i++) {
            if (i < a.length()) {
                for (int j = 1; j < b.length() + d.length(); j++) {
                    if (j == d.length())
                        System.out.print(a.charAt(a.length() - i));
                    else
                        System.out.print("*");
                }
                System.out.println();
            }
            if (i == a.length()) {
                for (int k = d.length() - 1; k >= 0; k--) System.out.print(d.charAt(k));
                for (int k = 1; k < b.length(); k++) System.out.print(b.charAt(k));
                System.out.println();
            }
            if (i > a.length()) {
                for (int j = 1; j < b.length() + d.length(); j++) {
                    if (j == d.length())
                        System.out.print(c.charAt(w));
                    else
                        System.out.print("*");
                }
                w++;
                System.out.println();
            }
        }
        sc.close();
    }
}