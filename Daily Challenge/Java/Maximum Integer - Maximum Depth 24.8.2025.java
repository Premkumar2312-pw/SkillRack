import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        int d = 0, md = 0;
        Map<Integer, List<Integer>> map = new HashMap<>();

        for (int i = 0; i < s.length(); ) {
            if (s.charAt(i) == '(') { d++; md = Math.max(md, d); i++; }
            else if (s.charAt(i) == ')') { d--; i++; }
            else if (Character.isDigit(s.charAt(i))) {
                int n = 0;
                while (i < s.length() && Character.isDigit(s.charAt(i))) {
                    n = n * 10 + (s.charAt(i) - '0'); i++;
                }
                map.computeIfAbsent(d, k -> new ArrayList<>()).add(n);
            } else i++;
        }

        while (md > 0 && !map.containsKey(md)) md--;
        int ans = Collections.max(map.getOrDefault(md, Arrays.asList(0)));
        System.out.println(ans);
    }
}