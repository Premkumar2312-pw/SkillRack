import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), q = sc.nextInt();
        int[] l = new int[n];
        for (int i = 0; i < n; i++) l[i] = sc.nextInt();
        ArrayList<Integer> l1 = new ArrayList<>();
        int I = 0;
        while (I < q) {
            int j = 0;
            while (j < n && I < q) {
                j++;
                l1.add(j);
                I++;
            }
            int k = n - 1;
            while (k > 1 && I < q) {
                l1.add(k);
                k--;
                I++;
            }
        }
        for (int i = 1; i <= n; i++) {
            int d = 0;
            for (int j = 0; j < l1.size(); j++)
                if (i == l1.get(j)) d += l[j];
            System.out.print(d + " ");
        }
    }
}