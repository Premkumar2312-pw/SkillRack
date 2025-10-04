import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt(), C = sc.nextInt();
        String[][] arr = new String[R][C];
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                arr[i][j] = sc.next();
        for (int i = 0; i < R; i++) {
            ArrayList<String> res = new ArrayList<>();
            ArrayList<String> cnt = new ArrayList<>();
            for (int j = 0; j < C; j++) {
                int idx = 0;
                for (char k : arr[i][j].toCharArray()) {
                    if (idx < 2) {
                        res.add(Character.toString(k));
                        idx++;
                    } else {
                        cnt.add(Character.toString(k));
                    }
                }
            }
            System.out.println(String.join(" ", res));
            System.out.println(String.join(" ", cnt));
        }
    }
}