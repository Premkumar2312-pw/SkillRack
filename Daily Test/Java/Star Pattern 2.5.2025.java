import java.util.Scanner;

public class PatternPrinter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = 2, underscore = 0;
        for (int i = 0; i < n; i++) {
            int l = k;
            for (int j = 0; j < k; j++) {
                for (int u = 0; u < underscore; u++) {
                    System.out.print("-");
                }
                for (int s = 0; s < l; s++) {
                    System.out.print("* ");
                }
                System.out.println();
                l--;
                underscore++;
            }
            k++;
        }
        sc.close();
    }
}