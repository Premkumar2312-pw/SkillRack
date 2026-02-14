import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] matrix = new int[r][c];

        for(int x = 0; x < r; x++)
            for(int y = 0; y < c; y++)
                matrix[x][y] = sc.nextInt();

        int i = sc.nextInt() - 1;
        int j = sc.nextInt() - 1;

        Set<String> visited = new HashSet<>();

        while(true) {
            if(i < 0 || i >= r || j < 0 || j >= c) {
                System.out.print("NO");
                break;
            }

            String key = i + "," + j;
            if(visited.contains(key)) {
                System.out.print("YES");
                break;
            }

            visited.add(key);
            int val = matrix[i][j];

            if(val >= 0) {
                if(val % 2 == 0) i--;
                else j++;
            } else {
                if((-val) % 2 == 0) i++;
                else j--;
            }
        }
    }
}