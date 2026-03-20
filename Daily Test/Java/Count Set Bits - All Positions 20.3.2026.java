import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        String[] b = new String[n];
        int le = 0;

        for(int i = 0; i < n; i++) {
            String s = Integer.toBinaryString(arr[i]);
            b[i] = s;
            le = Math.max(le, s.length());
        }

        int lsb = -1;

        while(le >= -lsb) {
            int ans = 0;

            for(int i = 0; i < n; i++) {
                if(b[i].length() >= -lsb) {
                    if(b[i].charAt(b[i].length() + lsb) == '1') {
                        ans++;
                    }
                }
            }

            lsb--;
            System.out.print(ans + " ");
        }
    }
}