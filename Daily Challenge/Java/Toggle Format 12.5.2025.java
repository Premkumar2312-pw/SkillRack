import java.util.*;

public class ReverseWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> words = new ArrayList<>();
        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            if (line.isEmpty()) break;
            words.add(line);
        }

        if (words.size() == 1 && words.get(0).contains(" ")) {
            String[] list = words.get(0).split(" ");
            for (int i = list.length - 1; i >= 0; i--) {
                System.out.println(list[i]);
            }
        } else {
            for (int i = words.size() - 1; i >= 0; i--) {
                System.out.print(words.get(i) + (i > 0 ? " " : ""));
            }
            System.out.println();
        }

        System.out.println(words.size());
        sc.close();
    }
}