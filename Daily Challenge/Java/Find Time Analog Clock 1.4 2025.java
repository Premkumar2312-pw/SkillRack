import java.util.Scanner;

public class ClockConversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[][] mat = new String[5][5];

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                mat[i][j] = sc.next();

        int n1 = sc.nextInt(), n2 = sc.nextInt();

        String[][] Clock = {
            {"", "11", "12", "1", ""},
            {"10", "", "", "", "2"},
            {"9", "", "", "", "3"},
            {"8", "", "", "", "4"},
            {"", "7", "6", "5", "8"}
        };

        int row = 0, col = 0;
        boolean found = false;
        
        // Find n1
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (!mat[i][j].isEmpty() && Integer.parseInt(mat[i][j]) == n1) {
                    row = i;
                    col = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        int hour = Integer.parseInt(Clock[row][col]);
        if (hour >= 24) System.out.print("00:");
        else if (hour < 10) System.out.printf("0%d:", hour);
        else System.out.printf("%d:", hour);

        row = col = 0;
        found = false;
        
        // Find n2
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (!mat[i][j].isEmpty() && Integer.parseInt(mat[i][j]) == n2) {
                    row = i;
                    col = j;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        int minute = Integer.parseInt(Clock[row][col]) * 5;
        if (minute >= 60) System.out.println("00");
        else if (minute < 10) System.out.println("05");
        else System.out.println(minute);
        
        sc.close();
    }
}