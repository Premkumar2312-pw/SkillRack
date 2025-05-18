import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class UniqueStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        Map<String, Integer> countMap = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String s = sc.nextLine();
            countMap.put(s, countMap.getOrDefault(s, 0) + 1);
            if (countMap.get(s) == 1) {
                System.out.println(s);
            } else {
                System.out.println(s + countMap.get(s));
            }
        }
        sc.close();
    }
}