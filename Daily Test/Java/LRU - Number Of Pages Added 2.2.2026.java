import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] pages = new int[N];
        for(int i = 0; i < N; i++)
            pages[i] = sc.nextInt();

        int S = sc.nextInt();
        int R = sc.nextInt();
        int X = sc.nextInt();

        LinkedList<Integer> cache = new LinkedList<>();
        int c = S, p = 0;

        for(int i = 0; i < N; i++) {
            if(cache.contains(pages[i])) {
                cache.remove((Integer)pages[i]);
            } else {
                p++;
                if(cache.size() >= c)
                    cache.removeFirst();
            }
            cache.addLast(pages[i]);

            if(i + 1 == R)
                c += X;
        }

        System.out.println(p);
    }
}