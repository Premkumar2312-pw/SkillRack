import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), t = sc.nextInt();
        ArrayList<Integer> a = new ArrayList<>();
        for (int i = 0; i < n - 1; i++) a.add(0);
        a.add(1);
        for (int i = n; i < t; i++) {
            int sum = 0;
            for (int j = i - n; j < i; j++) sum += a.get(j);
            a.add(sum);
        }
        for (int i = 0; i < t; i++) System.out.print(a.get(i) + " ");
    }
}