import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int r = sc.nextInt();
        int c = sc.nextInt();

        String[][] mat = new String[r][c];

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                mat[i][j] = sc.next();

        ArrayList<int[]> ass = new ArrayList<>();

        for(int i = 0; i < c; i++)
            for(int j = 0; j < r; j++)
                if(mat[j][i].equals("*"))
                    ass.add(new int[]{j, i});

        int var = 0, cnt = 0;

        for(int k = c - 1; k >= 0; k--) {
            for(int l = 0; l < r; l++) {

                if(var >= ass.size()) break;

                cnt++;
                int nx = ass.get(var)[0];
                int ny = ass.get(var)[1];

                if(!mat[l][k].equals("*")) {
                    mat[nx][ny] = mat[l][k];
                    mat[l][k] = "*";
                    var++;
                }
            }
            if(cnt == ass.size()) break;
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++)
                System.out.print(mat[i][j] + " ");
            System.out.println();
        }

        sc.close();
    }
}