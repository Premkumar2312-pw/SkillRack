import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        sc.nextLine(); // Consume remaining newline
        String s = sc.nextLine().trim();
        StringBuilder sb = new StringBuilder();
        for (int i = x; i <= y; i++) {
            sb.append(i);
        }
        if (s.equals(sb.toString()))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}