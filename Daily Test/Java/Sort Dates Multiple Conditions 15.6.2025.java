import java.util.*;

public class Main {
    static int getMonth(String s) {
        String[] m = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < 12; i++)
            if (m[i].equals(s)) return i + 1;
        return 0;
    }

    static class T {
        int d, m, y;
        String s;
        T(String str) {
            s = str;
            d = Integer.parseInt(str.substring(0, 2));
            m = getMonth(str.substring(3, 6));
            y = Integer.parseInt(str.substring(7));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<T> list = new ArrayList<>();
        for (int i = 0; i < n; i++)
            list.add(new T(sc.nextLine()));
        list.sort((a, b) -> {
            if (a.d != b.d) return a.d - b.d;
            if (a.m != b.m) return a.m - b.m;
            return a.y - b.y;
        });
        for (T t : list) System.out.println(t.s);
    }
}