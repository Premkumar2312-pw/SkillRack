import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<int[]> l1 = new ArrayList<>();
        for(int a = 0; a < n; a++) {
            String s = sc.next();
            int c = -1, d = -1, f = 0;
            for(char ch : s.toCharArray()) {
                if(Character.isDigit(ch)) {
                    if(f == 0) { c = ch - '0'; f = 1; }
                    else d = ch - '0';
                }
            }
            l1.add(new int[]{c, d});
        }
        int sum = 0;
        for(int[] pair : l1) {
            int j = pair[0], k = pair[1], val = 0;
            if(j < k)
                for(int i = j; i <= k; i++) val = val*10 + i;
            else
                for(int i = j; i >= k; i--) val = val*10 + i;
            sum += val;
        }
        System.out.println(sum);
    }
}