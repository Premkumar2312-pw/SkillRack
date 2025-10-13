import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] val = new int[N];
        int[] copy = new int[N];
        for (int i = 0; i < N; i++) {
            val[i] = sc.nextInt();
            copy[i] = val[i];
        }
        Arrays.sort(copy);

        for (int i = 0; i < N-1; i++) {
            int idx1 = -1, idx2 = -1;
            for (int k = 0; k < N; k++) {
                if (val[k] == copy[i]) idx1 = k;
                if (val[k] == copy[i+1]) idx2 = k;
            }
            if (idx1 < idx2) {
                for (int j = idx1; j <= idx2; j++)
                    System.out.print(val[j] + " ");
            } else {
                for (int j = idx1; j >= idx2; j--)
                    System.out.print(val[j] + " ");
            }
        }
        System.out.println();
    }
}