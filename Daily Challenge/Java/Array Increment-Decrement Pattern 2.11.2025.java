import java.util.Scanner;

public class Pattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] l1 = new int[n];
        int[] l = new int[n];
        int[] b = new int[n];

        for (int i = 0; i < n; i++) {
            l1[i] = sc.nextInt();
            l[i] = l1[i];
            b[i] = 0;
        }

        int k = sc.nextInt();
        int count = 0;

        while (count < k) {
            for (int j = 0; j < n; j++) {
                if (count == k) break;

                if (b[j] == 0 && count < k) {
                    l[j]--;
                    if (l[j] == 0) b[j] = 1;
                } else if (b[j] == 1 && count < k) {
                    l[j]++;
                    if (l[j] == l1[j]) b[j] = 0;
                }

                for (int x = 0; x < n; x++) {
                    System.out.print(l[x] + " ");
                }
                System.out.println();
                count++;
            }
        }
        sc.close();
    }
}