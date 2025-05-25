import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] matrix = new int[9][9];
        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                matrix[i][j] = sc.nextInt();
        String N = sc.next();
        int result = 0;
        for(int j = 0; j < 9; j++) {
            int digits = N.charAt(j) - '0';
            StringBuilder numStr = new StringBuilder();
            for(int i = 0; i < digits; i++)
                numStr.append(matrix[i][j]);
            result += Integer.parseInt(numStr.toString());
        }
        System.out.println(result);
    }
}