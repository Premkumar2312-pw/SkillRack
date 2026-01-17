import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        String S = sc.next();

        Set<String> visited = new HashSet<>();
        visited.add(x + "," + y);

        for (char d : S.toCharArray()) {
            if (d == 'N') {
                x = Math.max(1, x - 1);
                while (visited.contains(x + "," + y) && x > 1) x--;
            }
            if (d == 'S') {
                x = Math.min(R, x + 1);
                while (visited.contains(x + "," + y) && x < R) x++;
            }
            if (d == 'E') {
                y = Math.min(C, y + 1);
                while (visited.contains(x + "," + y) && y < C) y++;
            }
            if (d == 'W') {
                y = Math.max(1, y - 1);
                while (visited.contains(x + "," + y) && y > 1) y--;
            }
            visited.add(x + "," + y);
        }

        System.out.println(x + " " + y);
    }
}