import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        List<String> arr = new ArrayList<>();
        for (int i = 0; i < N; ++i) arr.add(sc.next());
        int k = sc.nextInt();
        int x = sc.nextInt();
        List<Integer> c = new ArrayList<>();
        for (String str : arr) {
            int num = Integer.parseInt(str);
            int len = str.length();
            if ((num < 0 && len - 1 == k) || (num > 0 && len == k))
                c.add(num);
        }
        Collections.sort(c);
        if (c.size() < x)
            System.out.println(-1);
        else
            System.out.println(c.get(x-1));
    }
}