import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        ArrayList<Integer> l = new ArrayList<>();

        for (int i = 0; i < n; i++)
            l.add(sc.nextInt());

        while (true) {
            int i = 0, s = l.size();
            while (i < l.size()) {
                if (l.get(i) > s) {
                    l.set(i, l.get(i) - s);
                    i++;
                } else {
                    l.remove(i);
                }
            }
            if (l.size() == 0) break;
        }

        for (int x : l)
            System.out.print(x + " ");
    }
}