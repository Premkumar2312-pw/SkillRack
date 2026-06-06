import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String st = s.next();
        int r = s.nextInt();
        int c = s.nextInt();
        int cnt = 0;

        for(int i = 0; i < r; i++) {
            String row = "";

            for(int j = 0; j < c; j++) {
                row += s.next();
            }

            int idx = row.indexOf(st);

            while(idx != -1) {
                cnt++;
                idx = row.indexOf(st, idx + 1);
            }
        }

        System.out.print(cnt);
    }
}