import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] s = new String[n];
        for (int i = 0; i < n; i++)
            s[i] = sc.nextLine();

        int l = s[0].length() / 4;

        for (int i = 0; i < n; i += 2) {
            for (int j = 0; j < 4; j++) {
                String part1 = s[i].substring(j * l, (j + 1) * l);
                String part2 = s[i + 1].substring(j * l, (j + 1) * l);
                System.out.println(part1 + part2);
            }
        }
    }
}