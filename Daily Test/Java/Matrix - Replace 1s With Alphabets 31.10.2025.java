import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] m = new String[r][c];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                m[i][j] = sc.next();
        char k = sc.next().charAt(0);
        int a, idx;
        if(Character.isUpperCase(k)) {
            a = 65;
            idx = k - 'A';
        } else {
            a = 97;
            idx = k - 'a';
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(m[i][j].equals("1")) {
                    m[i][j] = "" + (char)(a + (idx % 26));
                    idx++;
                }
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                System.out.print(m[i][j]);
                if(j == c-1)
                    System.out.println();
                else
                    System.out.print(" ");
            }
        }
    }
}