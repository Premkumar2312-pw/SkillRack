import java.util.*;

class Pair implements Comparable<Pair> {
    int key, val;
    Pair(int key, int val) {
        this.key = key;
        this.val = val;
    }
    public int compareTo(Pair o) {
        return this.key - o.key;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++) arr[i] = sc.nextInt();
        int k = sc.nextInt();
        Pair[] pa = new Pair[n];
        for(int i=0; i<n; i++) {
            int lastk = arr[i] & ((1 << k) - 1); // bitwise for last k bits
            pa[i] = new Pair(lastk, arr[i]);
        }
        Arrays.sort(pa);
        for(int i=0; i<n; i++) System.out.print(pa[i].val + " ");
    }
}