import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt(), n = sc.nextInt(), y = sc.nextInt();

        LocalDate dt = LocalDate.of(y, 1, 1);
        LocalDate ed = LocalDate.of(y, 12, 31);
        List<String> cityA = new ArrayList<>();
        List<String> cityB = new ArrayList<>();
        String city = "A";

        DateTimeFormatter f = DateTimeFormatter.ofPattern("dd-MMM-yyyy", Locale.ENGLISH);

        while (!dt.isAfter(ed)) {
            LocalDate start = dt;
            LocalDate end = dt.plusDays((city.equals("A") ? m : n) - 1);
            if (end.isAfter(ed)) end = ed;

            String range = f.format(start) + " to " + f.format(end);
            if (city.equals("A")) cityA.add(range);
            else cityB.add(range);

            dt = end.plusDays(1);
            city = city.equals("A") ? "B" : "A";
        }

        System.out.println("City A:");
        for (String s : cityA) System.out.println(s);

        System.out.println("City B:");
        for (String s : cityB) System.out.println(s);
    }
}
