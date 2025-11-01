import java.util.Scanner;

public class PrefixCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int a = 0, b = 0, c = 0;
        int count0 = 0, count1 = 0;

        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) == '0') count0++;
            else if (n.charAt(i) == '1') count1++;
        }

        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) == '1') a++;
            else b++;
            if (a < b) {
                c = 1;
                break;
            }
        }

        if (count0 == count1 && c == 0)
            System.out.println("Yes");
        else
            System.out.println("No");

        sc.close();
    }
}