import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        sc.nextLine();
        String[] city = new String[R];
        for (int i = 0; i < R; i++) city[i] = sc.nextLine();
        int K = sc.nextInt();
        StringBuilder r = new StringBuilder();
        for (char ch : city[0].toCharArray()) {
            if (ch == '|')
                for (int j = 0; j < K; j++) r.append('|');
            else r.append(ch);
        }
        for (int i = 0; i < R; i++) System.out.println(r);
    }
}