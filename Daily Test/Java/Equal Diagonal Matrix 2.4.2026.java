import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] matrix = new int[n][n];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                matrix[i][j] = sc.nextInt();

        HashSet<Integer> left = new HashSet<>();
        HashSet<Integer> right = new HashSet<>();

        for(int i = 0; i < n; i++) {
            left.add(matrix[i][i]);
            right.add(matrix[i][n - i - 1]);
        }

        if(left.equals(right))
            System.out.println("yes");
        else
            System.out.println("no");
    }
}