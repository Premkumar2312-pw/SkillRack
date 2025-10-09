import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        int[][] val = new int[R][C];
        for(int i = 0; i < R; i++)
            for(int j = 0; j < C; j++)
                val[i][j] = sc.nextInt();
        int X = sc.nextInt(), Y = sc.nextInt();
        int a = R - X + 1, b = C - Y + 1;
        int top = X - 1, bottom = X - 1 + a - 1;
        int left = Y - 1, right = Y - 1 + b - 1;

        ArrayList<Integer> border = new ArrayList<>();
        for(int i = left; i <= right; i++) border.add(val[top][i]);
        for(int i = top + 1; i <= bottom; i++) border.add(val[i][right]);
        for(int i = right - 1; i >= left; i--) border.add(val[bottom][i]);
        for(int i = bottom - 1; i > top; i--) border.add(val[i][left]);

        for(int i = 0; i < border.size(); i++)
            System.out.print(border.get(i) + " ");
        System.out.println();
    }
}