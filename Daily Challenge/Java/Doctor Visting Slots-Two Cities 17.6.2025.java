import java.util.*;
import java.time.*;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt(), N = sc.nextInt();
        int Y = sc.nextInt();

        LocalDate d = LocalDate.of(Y, 1, 1);
        LocalDate end = LocalDate.of(Y, 12, 31);
        List<String> A = new ArrayList<>(), B = new ArrayList<>();
        DateTimeFormatter fmt = DateTimeFormatter.ofPattern("dd-MMM-yyyy", Locale.ENGLISH);
        boolean f = true;

        while (!d.isAfter(end)) {
            int t = f ? M : N;
            LocalDate nd = d.plusDays(t - 1);
            if (nd.isAfter(end)) nd = end;
            String slot = d.format(fmt) + " to " + nd.format(fmt);
            if (f) A.add(slot);
            else B.add(slot);
            d = nd.plusDays(1);
            f = !f;
        }

        System.out.println("City A:");
        A.forEach(System.out::println);
        System.out.println("City B:");
        B.forEach(System.out::println);
    }
}