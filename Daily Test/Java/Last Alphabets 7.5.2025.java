import java.util.*;

public class WordGrouping {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().trim().split(" ");
        Map<Character, List<String>> map = new LinkedHashMap<>();

        for (String w : s) {
            char k = w.charAt(w.length() - 1);
            map.putIfAbsent(k, new ArrayList<>());
            map.get(k).add(w);
        }

        map.keySet().stream().sorted().forEach(key -> {
            System.out.println(String.join(" ", map.get(key)));
        });

        sc.close();
    }
}