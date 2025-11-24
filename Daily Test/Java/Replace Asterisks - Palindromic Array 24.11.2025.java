import java.util.*;

public class PalindromeForm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) a[i] = sc.next();
        String[] b = new String[n];
        for (int i = 0; i < n; i++) b[i] = a[n - 1 - i];
        int f = 0;
        if (a[0].equals("*")) f = 1;

        for (int i = 0; i < n; i++) {
            if (a[i].equals("*")) {
                if (!b[i].equals("*")) a[i] = b[i];
                else a[i] = "1";
            } else if (f == 1 && a[i].equals("*")) {
                a[i] = "1";
            }
        }
        boolean isPal = true;
        for (int i = 0; i < n; i++)
            if (!a[i].equals(a[n - 1 - i])) isPal = false;
        if (isPal)
            for (int i = 0; i < n; i++) System.out.print(a[i] + " ");
        else
            System.out.println("-1");
    }
}