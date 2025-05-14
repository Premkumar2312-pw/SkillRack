import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        s.nextLine();
        
        List<int[]> lists = new ArrayList<>();
        int columns = 0;
        
        // Reading rows
        for (int i = 0; i < N; i++) {
            String[] input = s.nextLine().trim().split("\\s+");
            int[] row = Arrays.stream(input).mapToInt(Integer::parseInt).toArray();
            lists.add(row);
            columns = Math.max(columns, row.length);
        }

        // Calculating column sums
        for (int col = 0; col < columns; col++) {
            int sum = 0;
            for (int[] row : lists) {
                if (col < row.length) {
                    sum += row[col];
                }
            }
            System.out.println(sum);
        }
        s.close();
    }
}