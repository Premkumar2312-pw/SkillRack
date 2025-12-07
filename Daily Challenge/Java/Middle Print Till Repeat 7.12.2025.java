import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        int mid = n / 2;
        
        StringBuilder result = new StringBuilder();
        result.append(s.charAt(mid));
        HashSet<Character> visited = new HashSet<>();
        visited.add(s.charAt(mid));
        
        int offset = 1;
        while (true) {
            if (mid - offset < 0 || mid + offset >= n) break;
            
            char left_char = s.charAt(mid - offset);
            result.append(left_char);
            if (visited.contains(left_char)) break;
            visited.add(left_char);
            
            char right_char = s.charAt(mid + offset);
            result.append(right_char);
            if (visited.contains(right_char)) break;
            visited.add(right_char);
            
            offset++;
        }
        
        System.out.println(result.toString());
        sc.close();
    }
}