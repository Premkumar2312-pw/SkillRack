import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] box = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                box[i][j] = sc.nextInt();

        String ins = sc.next();

        Set<String> seen = new HashSet<>();
        int i = 0, j = 0;
        int res = box[0][0];
        seen.add("0,0");

        for (char k : ins.toCharArray()) {
            if (k == 'E') j++;
            if (k == 'W') j--;
            if (k == 'N') i--;
            if (k == 'S') i++;

            String pos = i + "," + j;
            if (seen.contains(pos) && box[i][j] > 0) {
                box[i][j]--;
                res--;
            } else {
                res += box[i][j];
                seen.add(pos);
            }
        }

        System.out.print(res);
    }
}