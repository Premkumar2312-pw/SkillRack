import java.util.*;

public class Main {
    static String uniqueSorted(String s) {
        char[] arr = s.toCharArray();
        Arrays.sort(arr);
        StringBuilder sb = new StringBuilder();
        char last = 0;
        for (char c : arr) {
            if (sb.length() == 0 || c != last) {
                sb.append(c);
                last = c;
            }
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] val = new String[N];
        for (int i = 0; i < N; i++) val[i] = sc.next();

        boolean flag = true;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (uniqueSorted(val[i]).equals(uniqueSorted(val[j]))) {
                    System.out.println(val[i] + " " + val[j]);
                    flag = false;
                }
            }
        }
        if (flag) System.out.println(-1);
    }
}