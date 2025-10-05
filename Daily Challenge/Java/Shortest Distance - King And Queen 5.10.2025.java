import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] m = new String[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                m[i][j] = sc.next();

        int f = 0, d = 0;
        ArrayList<int[]> l = new ArrayList<>();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) {
                if(m[i][j].equals("K")) { f = i; d = j; }
                if(m[i][j].equals("Q")) l.add(new int[]{i, j});
            }

        ArrayList<Integer> l3 = new ArrayList<>();
        for(int[] pos : l) {
            int i = pos[0], j = pos[1];
            if(Math.abs(f - i) == 0) l3.add(Math.abs(d - j));
            if(Math.abs(d - j) == 0) l3.add(Math.abs(f - i));
            if(Math.abs(d - j) == Math.abs(f - i)) l3.add(Math.abs(f - i));
        }
        if(!l3.isEmpty())
            System.out.println(Collections.min(l3));
        else
            System.out.println(-1);
    }
}