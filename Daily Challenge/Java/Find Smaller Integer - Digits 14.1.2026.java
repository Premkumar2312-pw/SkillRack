import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();

        int k = sc.nextInt();
        String kstr = String.valueOf(k);

        int sum = 0;
        for(char d : kstr.toCharArray()) {
            int min = Integer.MAX_VALUE;
            boolean found = false;
            for(int num : arr) {
                if(String.valueOf(num).indexOf(d) != -1) {
                    min = Math.min(min, num);
                    found = true;
                }
            }
            if(found) sum += min;
        }

        System.out.println(sum);
    }
}