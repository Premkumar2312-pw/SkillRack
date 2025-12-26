import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int k = 1;

            while (true) {
                String bin = Integer.toBinaryString(k);
                long dec = Long.parseLong(bin);

                if (dec % x == 0) {
                    sum += k;
                    break;
                }
                k++;
            }
        }

        System.out.println(sum);
    }
}