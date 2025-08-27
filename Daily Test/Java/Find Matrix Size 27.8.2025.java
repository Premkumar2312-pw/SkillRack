import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> lines = new ArrayList<>();
        while (sc.hasNextLine()) {
            String s = sc.nextLine().trim();
            if (s.isEmpty()) break;
            lines.add(s);
        }
        int rows = 0, cols = -1;
        for (String line : lines) {
            String[] parts = line.split("\\s+");
            int count = parts.length;

            if (cols == -1) {
                cols = count;
                rows = 1;
            } else if (count == cols) {
                rows++;
            } else {
                System.out.println(rows + " " + cols);
                cols = count;
                rows = 1;
            }
        }
        System.out.println(rows + " " + cols);
    }
}