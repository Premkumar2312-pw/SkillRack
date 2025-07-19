import java.util.*;
public class Main {
    public static void main(String[] a) {
        Scanner s = new Scanner(System.in);
        String[][] b = new String[8][8];
        int x = 0, y = 0, c = 0;
        for(int i = 0; i < 8; i++)
            for(int j = 0; j < 8; j++) {
                b[i][j] = s.next();
                if(b[i][j].equals("H")) { x = i; y = j; }
            }
        int[][] m = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
        for(int[] d : m) {
            int nx = x + d[0], ny = y + d[1];
            if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8) c++;
        }
        System.out.print(c);
    }
}
