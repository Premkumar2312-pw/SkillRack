import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] arr = new String[N];
        for (int i = 0; i < N; i++) arr[i] = sc.next();
        
        StringBuilder q = new StringBuilder();
        for (int i = 9; i >= 0; i--) q.append(i);
        
        long cnt = 0;
        for (String s : arr) {
            StringBuilder val = new StringBuilder();
            for (char j : q.toString().toCharArray()) {
                if (s.indexOf(j) != -1) continue;
                val.append(j);
            }
            cnt += Long.parseLong(val.toString());
        }
        System.out.println(cnt);
    }
}