import java.util.Scanner;

public class Main {
    public static String toBinary(int n) {
        if (n == 0) return "0";
        StringBuilder sb = new StringBuilder();
        while (n > 0) {
            sb.append(n % 2);
            n /= 2;
        }
        return sb.reverse().toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt();
        String c = toBinary(a), d = toBinary(b);
        int maxi = Math.max(c.length(), d.length());
        c = String.format("%" + maxi + "s", c).replace(' ', '0');
        d = String.format("%" + maxi + "s", d).replace(' ', '0');
        StringBuilder ans = new StringBuilder();
        for (int i = maxi - 1; i >= 0; i -= 2) {
            if (c.charAt(i) == d.charAt(i)) {
                ans.append(c.charAt(i));
            }
        }
        if (ans.length() == 0)
            System.out.println(-1);
        else {
            int result = Integer.parseInt(ans.reverse().toString(), 2);
            System.out.println(result);
        }
    }
}