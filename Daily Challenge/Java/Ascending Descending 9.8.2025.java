import java.util.*;

public class Main {
    static boolean isAsc(List<Integer> list) {
        for (int i = 1; i < list.size(); i++)
            if (list.get(i) < list.get(i - 1)) return false;
        return true;
    }

    static boolean isDesc(List<Integer> list) {
        for (int i = 1; i < list.size(); i++)
            if (list.get(i) > list.get(i - 1)) return false;
        return true;
    }

    static boolean allEqual(List<Integer> list) {
        for (int i = 1; i < list.size(); i++)
            if (!list.get(i).equals(list.get(0))) return false;
        return true;
    }

    static void print(List<Integer> list) {
        for (int x : list) System.out.print(x + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < m; i++) a.add(sc.nextInt());

        int n = sc.nextInt();
        List<Integer> b = new ArrayList<>();
        for (int i = 0; i < n; i++) b.add(sc.nextInt());

        if (allEqual(a) && allEqual(b)) {
            if (a.get(0) < b.get(0)) { print(a); print(b); }
            else if (b.get(0) < a.get(0)) { print(b); print(a); }
            else { print(a); print(b); }
        } else if (isAsc(a) && isDesc(b)) {
            print(a); print(b);
        } else if (isDesc(a) && isAsc(b)) {
            print(b); print(a);
        } else {
            print(a); print(b);
        }
    }
}
