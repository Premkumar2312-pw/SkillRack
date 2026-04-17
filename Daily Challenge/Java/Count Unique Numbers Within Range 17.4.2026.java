import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int a = s.nextInt();
        int b = s.nextInt();

        int cnt = 0;
        int[] freq = new int[1000001];

        for(int i = 0; i < n; i++){
            int x = s.nextInt();
            freq[x]++;
        }

        for(int i = a; i <= b; i++){
            if(freq[i] > 0){
                cnt++;
            }
        }

        System.out.println(cnt);
    }
}


//SET APPROACH 
import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int r1 = s.nextInt();
        int r2 = s.nextInt();

        Set<Integer> set = new HashSet<>();

        for(int i = 0; i < n; i++) {
            int x = s.nextInt();
            if(x >= r1 && x <= r2) {
                set.add(x); // store only unique values
            }
        }

        System.out.println(set.size());
    }
}