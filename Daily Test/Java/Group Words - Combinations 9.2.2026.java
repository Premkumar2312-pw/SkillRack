import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] arr = sc.nextLine().split(" ");
        Map<String, List<String>> map = new LinkedHashMap<>();

        for (String s : arr) {
            char[] ch = s.toCharArray();
            Arrays.sort(ch);
            String key = new String(ch);
            map.computeIfAbsent(key, k -> new ArrayList<>()).add(s);
        }

        for (List<String> v : map.values()) {
            for (String x : v) System.out.print(x + " ");
            System.out.println();
        }
    }
}