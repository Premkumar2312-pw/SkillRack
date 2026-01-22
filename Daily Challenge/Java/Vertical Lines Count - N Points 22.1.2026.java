import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Map<Integer, Set<Integer>> d = new HashMap<>();
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            d.computeIfAbsent(x, k -> new HashSet<>()).add(y);
        }

        int L = sc.nextInt();
        int cnt = 0;

        for(int x : d.keySet())
            for(int y : d.get(x))
                if(d.get(x).contains(y + L))
                    cnt++;

        System.out.print(cnt);
    }
}