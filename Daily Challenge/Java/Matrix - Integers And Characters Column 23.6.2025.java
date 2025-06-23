import java.util.*;

public class Main {
    public static boolean isDigitCol(String[] col) {
        for (String val : col) {
            for (char ch : val.toCharArray())
                if (!Character.isDigit(ch)) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] mat = new String[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                mat[i][j] = sc.next();

        List<String> nums = new ArrayList<>();
        List<String> chars = new ArrayList<>();

        for (int j = 0; j < c; j++) {
            String[] col = new String[r];
            for (int i = 0; i < r; i++)
                col[i] = mat[i][j];

            if (isDigitCol(col)) {
                int sum = 0;
                for (String val : col) sum += Integer.parseInt(val);
                nums.add(String.valueOf(sum));
            } else {
                StringBuilder sb = new StringBuilder();
                for (int i = r - 1; i >= 0; i--)
                    sb.append(mat[i][j]);
                chars.add(sb.toString());
            }
        }

        for (String s : nums) System.out.print(s + " ");
        for (String s : chars) System.out.print(s + " ");
    }
}