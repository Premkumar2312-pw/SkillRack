import java.util.Scanner;

public class Main {
    static String replaceChars(String str) {
        str = str.replace('+', '_').replace('-', '+').replace('_', '-');
        return str;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String b = scanner.nextLine().trim();
        String c = scanner.nextLine().trim();
        String d = replaceChars(b);
        System.out.println(d);

        int res = 0;
        int xval = Integer.parseInt(c);
        int i = 0;
        while (i < d.length()) {
            char ch = d.charAt(i);
            if (Character.isDigit(ch)) {
                int coeff = ch - '0';
                i++;
                if (i < d.length() && d.charAt(i) == 'x') {
                    res += coeff * xval;
                    i++;
                } else {
                    res += coeff;
                }
            } else if (ch == '+') {
                i++;
            } else if (ch == '-') {
                i++;
                if (i < d.length() && Character.isDigit(d.charAt(i))) {
                    int coeff = d.charAt(i) - '0';
                    i++;
                    if (i < d.length() && d.charAt(i) == 'x') {
                        res -= coeff * xval;
                        i++;
                    } else {
                        res -= coeff;
                    }
                }
            } else {
                i++;
            }
        }
        System.out.println(res);
        scanner.close();
    }
}