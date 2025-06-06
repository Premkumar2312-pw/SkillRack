import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next(), b = sc.next();
        Map<Character, Integer> p = new HashMap<>();
        for (int i = 0; i < 10; i++) p.put(b.charAt(i), i);
        char[] arr = a.toCharArray();
        Arrays.sort(arr, (x, y) -> p.get(x) - p.get(y));
        System.out.print(new String(arr));
    }
}