import java.util.*;

class Main {
    static Map<String, List<String>> map = new HashMap<>();

    static int dfs(String person) {
        int count = 1;
        for (String child : map.getOrDefault(person, new ArrayList<>()))
            count += dfs(child);
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < n; i++) {
            String[] s = sc.nextLine().split(" ");
            map.putIfAbsent(s[1], new ArrayList<>());
            map.get(s[1]).add(s[0]);
        }

        String person = sc.nextLine();
        System.out.println(dfs(person));
    }
}