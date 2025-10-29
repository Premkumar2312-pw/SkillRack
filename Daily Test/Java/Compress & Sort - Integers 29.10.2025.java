import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> l1 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String s = sc.next();
            List<Integer> l2 = new ArrayList<>();
            for (int j = 0; j < s.length(); j++) {
                String temp = s.substring(0, j) + s.substring(j + 1);
                l2.add(Integer.parseInt(temp));
            }
            l1.add(Collections.min(l2));
        }

        Collections.sort(l1);
        for (int val : l1)
            System.out.print(val + " ");
        System.out.println();
        sc.close();
    }
}