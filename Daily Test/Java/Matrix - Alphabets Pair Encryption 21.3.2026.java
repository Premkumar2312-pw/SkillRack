import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[][] key = new String[5][5];
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++)
                key[i][j] = sc.next();

        String s = sc.next();
        StringBuilder res = new StringBuilder();

        for(int i = 0; i < s.length() - 1; i += 2) {
            char ch1 = s.charAt(i), ch2 = s.charAt(i + 1);
            int row1=0,col1=0,row2=0,col2=0;

            for(int r = 0; r < 5; r++) {
                for(int c = 0; c < 5; c++) {
                    if(key[r][c].contains(ch1+"")) {
                        row1 = r; col1 = c;
                    }
                    if(key[r][c].contains(ch2+"")) {
                        row2 = r; col2 = c;
                    }
                }
            }

            if(row1 == row2 && col1 != col2) {
                col1 = (col1 + 1) % 5;
                col2 = (col2 + 1) % 5;
            } else if(col1 == col2 && row1 != row2) {
                row1 = (row1 + 1) % 5;
                row2 = (row2 + 1) % 5;
            } else if(row1 != row2 && col1 != col2) {
                int temp = col1;
                col1 = col2;
                col2 = temp;
            }

            res.append(key[row1][col1].charAt(0));
            res.append(key[row2][col2].charAt(0));
        }

        System.out.println(res);
        sc.close();
    }
}