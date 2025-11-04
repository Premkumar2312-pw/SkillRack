import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] board = new String[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                board[i][j] = sc.next();
        int res = 0;
        int[] diag = {1, 1};
        int[] rev = {1, -1};
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j].equals("1")) {
                    int nc = i + diag[0], nr = j + diag[1];
                    while(nc >= 0 && nc < n && nr >= 0 && nr < n) {
                        if(board[nc][nr].equals("1")) res++;
                        nc++; nr++;
                    }
                    int ec = i + rev[0], er = j + rev[1];
                    while(ec >= 0 && ec < n && er >= 0 && er < n) {
                        if(board[ec][er].equals("1")) res++;
                        ec++; er--;
                    }
                }
            }
        }
        System.out.println(res);
        sc.close();
    }
}