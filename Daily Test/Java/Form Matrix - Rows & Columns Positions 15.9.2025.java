import java.util.*;

class Cell {
    int row, col;
    String val;
    Cell(int r, int c, String v) { row = r; col = c; val = v; }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] parts = line.split("\\s+");

        List<Cell> list = new ArrayList<>();
        for (String token : parts) {
            StringBuilder nums = new StringBuilder();
            StringBuilder text = new StringBuilder();
            List<Integer> numbers = new ArrayList<>();

            for (char ch : token.toCharArray()) {
                if (Character.isDigit(ch)) nums.append(ch);
                else {
                    if (nums.length() > 0) {
                        numbers.add(Integer.parseInt(nums.toString()));
                        nums.setLength(0);
                    }
                    text.append(ch);
                }
            }
            if (nums.length() > 0) numbers.add(Integer.parseInt(nums.toString()));
            list.add(new Cell(numbers.get(0), numbers.get(1), text.toString()));
        }

        list.sort((a, b) -> a.row == b.row ? a.col - b.col : a.row - b.row);

        int currentRow = list.get(0).row;
        for (Cell cell : list) {
            if (cell.row != currentRow) {
                System.out.println();
                currentRow = cell.row;
            }
            System.out.print(cell.val + " ");
        }
    }
}