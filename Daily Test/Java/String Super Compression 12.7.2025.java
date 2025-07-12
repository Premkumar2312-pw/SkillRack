import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        TreeMap<Character, Integer> map = new TreeMap<>();
        int i = 0, len = s.length();
        
        while (i < len) {
            char ch = s.charAt(i++);
            int num = 0;
            while (i < len && Character.isDigit(s.charAt(i))) {
                num = num * 10 + (s.charAt(i++) - '0');
            }
            map.put(ch, map.getOrDefault(ch, 0) + num);
        }

        for (char c : map.keySet()) {
            System.out.print(c + "" + map.get(c));
        }
    }
}