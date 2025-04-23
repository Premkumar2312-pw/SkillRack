import java.util.*;
import java.time.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        int daysInYear = Year.isLeap(y) ? 366 : 365;

        for (int d = x; d <= daysInYear; d += x) {
            LocalDate date = LocalDate.ofYearDay(y, d);
            String formatted = String.format("%02d-%s-%04d",
                    date.getDayOfMonth(),
                    date.getMonth().toString().substring(0,1) + date.getMonth().toString().substring(1,3).toLowerCase(),
                    date.getYear());
            System.out.println(formatted);
        }
    }
}