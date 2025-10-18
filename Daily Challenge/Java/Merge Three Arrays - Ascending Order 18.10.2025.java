import java.util.*;

class Pair {
    String key;
    int value;
    Pair(String k, int v) { key = k; value = v; }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int[] val1 = new int[A];
        for (int i = 0; i < A; i++) val1[i] = sc.nextInt();
        int B = sc.nextInt();
        int[] val2 = new int[B];
        for (int i = 0; i < B; i++) val2[i] = sc.nextInt();
        int C = sc.nextInt();
        int[] val3 = new int[C];
        for (int i = 0; i < C; i++) val3[i] = sc.nextInt();
        List<Pair> d = new ArrayList<>();

        for (int i = 0; i < A; i++) d.add(new Pair("a" + i, val1[i]));
        for (int i = 0; i < B; i++) d.add(new Pair("b" + i, val2[i]));
        for (int i = 0; i < C; i++) d.add(new Pair("c" + i, val3[i]));

        d.sort(Comparator.comparingInt(p -> p.value));
        for (Pair p : d) System.out.print(p.key + " ");
    }
}