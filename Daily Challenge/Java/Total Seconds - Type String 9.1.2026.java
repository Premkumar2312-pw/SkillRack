import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String K = sc.nextLine();
        String S = sc.nextLine();

        int[] pos = new int[26];

        for (int i = 0; i < 26; i++)
            pos[K.charAt(i) - 'a'] = i;

        int time = 0;
        for (int i = 1; i < S.length(); i++) {
            int prev = pos[S.charAt(i - 1) - 'a'];
            int curr = pos[S.charAt(i) - 'a'];
            time += Math.abs(curr - prev);
        }

        System.out.println(time);
    }
}