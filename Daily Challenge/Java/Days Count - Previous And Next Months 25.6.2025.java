import java.util.*;
import java.time.*;
import java.time.format.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine().trim();
        DateTimeFormatter fmt = DateTimeFormatter.ofPattern("dd-MMM-yyyy", Locale.ENGLISH);
        LocalDate date = LocalDate.parse(input, fmt);

        LocalDate prevMonth = date.minusMonths(1);
        LocalDate nextMonth = date.plusMonths(1);

        YearMonth pm = YearMonth.of(prevMonth.getYear(), prevMonth.getMonth());
        YearMonth nm = YearMonth.of(nextMonth.getYear(), nextMonth.getMonth());

        System.out.println(pm.getMonth() + " " + pm.getYear() + " - " + pm.lengthOfMonth() + " days");
        System.out.println(nm.getMonth() + " " + nm.getYear() + " - " + nm.lengthOfMonth() + " days");
    }
}