import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for (int i = 0; i < n; i++) arr1[i] = sc.nextInt();
        for (int i = 0; i < n; i++) arr2[i] = sc.nextInt();

        StringBuilder out = new StringBuilder();

        for (int idx = 0; idx < n; idx++) {
            int need = arr2[idx];
            int ele = arr1[idx];
            int cnt = 0, len = 0;
            boolean found = false;

            for (int j = idx; j < n; j++) {
                len++;
                if (arr1[j] == ele) {
                    cnt++;
                    if (cnt >= need) {
                        out.append(len).append(' ');
                        found = true;
                        break;
                    }
                }
            }
            if (!found) out.append(-1).append(' ');
        }

        System.out.print(out.toString());
    }
}