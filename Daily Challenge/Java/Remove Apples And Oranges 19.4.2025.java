import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        String[][] m = new String[R][C];

        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                m[i][j] = sc.next();

        int T = sc.nextInt();

        while (T-- > 0) {
            int aCount = 0, oCount = 0;
            for (int j = 0; j < C; j++) {
                if (m[R-1][j].equals("A")) aCount++;
                else if (m[R-1][j].equals("O")) oCount++;
            }

            String remove = (aCount >= oCount) ? "A" : "O";
            for (int j = 0; j < C; j++)
                if (m[R-1][j].equals(remove))
                    m[R-1][j] = "*";

            for (int j = 0; j < C; j++) {
                List<String> fruits = new ArrayList<>();
                int empty = 0;

                for (int i = 0; i < R; i++) {
                    if (m[i][j].equals("*")) empty++;
                    else fruits.add(m[i][j]);
                }

                for (int i = 0; i < empty; i++) m[i][j] = "*";
                for (int i = 0; i < fruits.size(); i++) m[i+empty][j] = fruits.get(i);
            }
        }

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++)
                System.out.print(m[i][j] + " ");
            System.out.println();
        }

        sc.close();
    }
}