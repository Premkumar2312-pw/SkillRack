import java.util.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class LatestDate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] days = new int[m];
        for (int i = 0; i < m; i++) days[i] = sc.nextInt();

        int n = sc.nextInt();
        String[] months = new String[n];
        for (int i = 0; i < n; i++) months[i] = sc.next();

        int y = sc.nextInt();
        int[] years = new int[y];
        for (int i = 0; i < y; i++) years[i] = sc.nextInt();

        Map<String, Integer> monthMap = Map.of(
            "Jan", 1, "Feb", 2, "Mar", 3, "Apr", 4, "May", 5,
            "Jun", 6, "Jul", 7, "Aug", 8, "Sep", 9,
            "Oct", 10, "Nov", 11, "Dec", 12
        );

        LocalDate latest = LocalDate.of(1, 1, 1);
        for (int yr : years) {
            for (String mm : months) {
                for (int dd : days) {
                    try {
                        LocalDate date = LocalDate.of(yr, monthMap.get(mm), dd);
                        if (date.isAfter(latest)) {
                            latest = date;
                        }
                    } catch (Exception e) {
                        continue;
                    }
                }
            }
        }

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MMM-yyyy");
        System.out.println(latest.format(formatter));
        sc.close();
    }
}