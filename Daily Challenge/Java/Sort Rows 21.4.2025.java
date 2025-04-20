import java.util.*;

class Row {
    char ch;
    int index;
    String line;

    Row(char ch, int index, String line) {
        this.ch = ch;
        this.index = index;
        this.line = line;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        sc.nextLine();
        ArrayList<Row> rows = new ArrayList<>();

        for (int i = 0; i < r; i++) {
            String line = sc.nextLine();
            String[] parts = line.split(" ");
            char ch = 0;
            for (String part : parts) {
                if (Character.isLetter(part.charAt(0))) {
                    ch = part.charAt(0);
                    break;
                }
            }
            rows.add(new Row(ch, i, line));
        }

        rows.sort((a, b) -> {
            if (a.ch != b.ch)
                return a.ch - b.ch;
            return b.index - a.index;
        });

        for (Row row : rows) {
            System.out.println(row.line);
        }
    }
}