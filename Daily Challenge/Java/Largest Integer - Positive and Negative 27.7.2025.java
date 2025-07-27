import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = -1;
        Set<Integer> set = new HashSet<>();
        while (n-- > 0) set.add(sc.nextInt());
        for (int i : set)
            if (i > 0 && set.contains(-i)) m = Math.max(m, i);
        System.out.print(m);
    }
}