import java.util.*;

public class UniqueTriplets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l1 = new String[n];
        String[] l2 = new String[n];
        String[] l3 = new String[n];

        for (int i = 0; i < n; i++) l1[i] = sc.next();
        for (int i = 0; i < n; i++) l2[i] = sc.next();
        for (int i = 0; i < n; i++) l3[i] = sc.next();

        Set<String> uniqueSet = new HashSet<>();

        for (int i = 0; i < n; i++) {
            // Create a combined key
            String key = l1[i] + "#" + l2[i] + "#" + l3[i];
            uniqueSet.add(key);
        }

        System.out.println(uniqueSet.size());
        sc.close();
    }
}