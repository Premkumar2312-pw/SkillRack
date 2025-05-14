import java.util.*;
public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        s.nextLine();
        List<int[]> lists = new ArrayList<>();
        int minColumns = Integer.MAX_VALUE;

        for (int i = 0; i < N; i++) {
            String[] input = s.nextLine().trim().split("\\s+");
            int[] row = Arrays.stream(input).mapToInt(Integer::parseInt).toArray();
            lists.add(row);
            minColumns = Math.min(minColumns, row.length);
        }

        for (int col = 0; col < minColumns; col++) {
            int sum = 0;
            for (int[] row : lists) {
                sum += row[col];
            }
            System.out.println(sum);
        }
        s.close();
    }
}
