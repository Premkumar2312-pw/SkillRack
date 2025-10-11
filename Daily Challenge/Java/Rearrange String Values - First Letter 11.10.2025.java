import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        String[] val = new String[N];
        HashMap<Character, Integer> b = new HashMap<>();
        for (int i = 0; i < N; i++) {
            val[i] = sc.nextLine().trim();
            b.put(val[i].charAt(0), b.getOrDefault(val[i].charAt(0), 0) + 1);
            char last = val[i].charAt(val[i].length() - 1);
            b.put(last, b.getOrDefault(last, 0) + 1);
        }
        List<Map.Entry<Character, Integer>> list = new ArrayList<>(b.entrySet());
        list.sort((a, b1) -> b1.getValue().compareTo(a.getValue()));
        char key = list.get(0).getKey();
        for (String s : val) {
            if (s.charAt(0) == key)
                System.out.println(s);
            else
                System.out.println(new StringBuilder(s).reverse().toString());
        }
    }
}