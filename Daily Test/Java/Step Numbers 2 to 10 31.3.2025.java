import java.util.Scanner;

public class StepNumberBase {
    static boolean isStepNumber(String numStr) {
        for (int i = 0; i < numStr.length() - 1; i++) {
            if (Math.abs(numStr.charAt(i) - numStr.charAt(i + 1)) != 1) {
                return false;
            }
        }
        return true;
    }

    static String convertToBase(int n, int base) {
        StringBuilder res = new StringBuilder();
        while (n > 0) {
            res.insert(0, (n % base));
            n /= base;
        }
        return res.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        boolean found = false;
        for (int base = 2; base <= 10; base++) {
            String baseRepr = convertToBase(n, base);
            if (isStepNumber(baseRepr)) {
                System.out.println(baseRepr);
                found = true;
            }
        }
        if (!found) System.out.println(-1);
    }
}
