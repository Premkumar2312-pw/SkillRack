import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numberOfElements = scanner.nextInt();
        int[] marks = new int[numberOfElements];

        for (int i = 0; i < numberOfElements; i++) {
            marks[i] = scanner.nextInt();
        }
        int indexPosition = scanner.nextInt();
        scanner.close();

        Set<Integer> uniqueMarks = new TreeSet<>(Collections.reverseOrder());
        for (int mark : marks) {
            uniqueMarks.add(mark);
        }

        Map<Integer, Integer> rankMap = new HashMap<>();
        int rank = 1;
        for (int mark : uniqueMarks) {
            rankMap.put(mark, rank++);
        }

        System.out.println(rankMap.get(marks[indexPosition - 1]));
    }
}
