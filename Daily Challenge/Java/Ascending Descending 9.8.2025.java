import java.util.*;

public class Main {
    static boolean isSortedAsc(int[] arr) {
        for (int i = 1; i < arr.length; i++)
            if (arr[i - 1] > arr[i]) return false;
        return true;
    }

    static boolean allEqual(int[] a, int[] b) {
        int val = a[0];
        for (int x : a) if (x != val) return false;
        for (int x : b) if (x != val) return false;
        return true;
    }

    static void print(int[] arr) {
        for (int x : arr) System.out.print(x + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] a = new int[m];
        for (int i = 0; i < m; i++) a[i] = sc.nextInt();
        int n = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) b[i] = sc.nextInt();

        boolean sa = isSortedAsc(a), sb = isSortedAsc(b);

        if (allEqual(a, b)) {
            print(a);
            print(b);
        } else if (sa && !sb) {
            print(a);
            print(b);
        } else if (!sa && sb) {
            print(b);
            print(a);
        } else {
            print(a);
            print(b);
        }
    }
}