import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> nums = new ArrayList<>();
        List<String> lines = new ArrayList<>();
        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            if (!line.isEmpty()) {
                lines.add(line);
            }
        }

        if (lines.size() == 1) {
            String[] parts = lines.get(0).split(" ");
            for (String s : parts) nums.add(Integer.parseInt(s));
            for (int i = nums.size() - 1; i >= 0; i--)
                System.out.println(nums.get(i));
        } else {
            for (String s : lines) nums.add(Integer.parseInt(s));
            for (int i = nums.size() - 1; i >= 0; i--) {
                System.out.print(nums.get(i));
                if (i != 0) System.out.print(" ");
            }
            System.out.println();
        }
    }
}