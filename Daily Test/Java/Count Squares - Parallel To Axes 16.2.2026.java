import java.util.*;

public class Main {

    static class Point {
        int x, y;
        Point(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        HashSet<String> set = new HashSet<>();

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            set.add(x + "," + y);
        }

        ArrayList<Point> pts = new ArrayList<>();

        for (String s : set) {
            String[] parts = s.split(",");
            pts.add(new Point(
                    Integer.parseInt(parts[0]),
                    Integer.parseInt(parts[1])
            ));
        }

        int count = 0;
        int size = pts.size();

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {

                Point p1 = pts.get(i);
                Point p2 = pts.get(j);

                int dx = p2.x - p1.x;
                int dy = p2.y - p1.y;

                if (Math.abs(dx) == Math.abs(dy) && dx != 0) {

                    String p3 = p1.x + "," + p2.y;
                    String p4 = p2.x + "," + p1.y;

                    if (set.contains(p3) && set.contains(p4)) {
                        count++;
                    }
                }
            }
        }

        System.out.println(count / 2);
        sc.close();
    }
}