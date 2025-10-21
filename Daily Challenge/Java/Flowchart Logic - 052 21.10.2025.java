import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int N1 = sc.nextInt();
        int N2 = sc.nextInt();
        int N3 = sc.nextInt();

        int ctr = N2;
        while (ctr >= N1 || ctr <= N3) {
            if (ctr == 1) {
                System.out.print(ctr + " ");
            } else {
                System.out.print(1 + " ");
            }

            if (ctr <= N3) {
                System.out.print(N2 + " ");
            } else {
                System.out.print(N3 + " ");
            }
            System.out.println();
            ctr = 1;
            ctr++;
            if (ctr > N3) break;
        }
        sc.close();
    }
}