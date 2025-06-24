import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        Map<String, Integer> yearMap = new HashMap<>();
        Map<String, Integer> monthMap = new HashMap<>();
        String[] months = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

        for (int i = 0; i < n; i++) {
            String[] parts = sc.nextLine().split("-");
            String mo = parts[1];
            String yr = parts[2];
            yearMap.put(yr, yearMap.getOrDefault(yr, 0) + 1);
            monthMap.put(mo, monthMap.getOrDefault(mo, 0) + 1);
        }

        int maxY = Collections.max(yearMap.values());
        int maxM = Collections.max(monthMap.values());

        List<Integer> sortedYears = new ArrayList<>();
        for (String y : yearMap.keySet()) {
            if (yearMap.get(y) == maxY) {
                sortedYears.add(Integer.parseInt(y));
            }
        }
        Collections.sort(sortedYears);
        for (int y : sortedYears) System.out.print(y + " ");
        System.out.println();

        for (String m : months) {
            if (monthMap.containsKey(m) && monthMap.get(m) == maxM) {
                System.out.print(m + " ");
            }
        }
    }
}