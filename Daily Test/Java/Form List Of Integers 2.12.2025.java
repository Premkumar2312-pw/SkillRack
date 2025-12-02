import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Deque<Integer> dq = new ArrayDeque<>();

        for (int i = 1; i <= n; i++) {
            int x = sc.nextInt();
            if (i % 2 == 1) dq.addFirst(x);
            else dq.addLast(x);
        }

        if (n % 2 == 0) {
            List<Integer> temp = new ArrayList<>(dq);
            Collections.reverse(temp);
            for (int v : temp) System.out.print(v + " ");
        } else {
            for (int v : dq) System.out.print(v + " ");
        }
    }
}