import java.util.*;

class Main {
    static class Entry {
        String date;
        int revenue;

        Entry(String date, int revenue) {
            this.date = date;
            this.revenue = revenue;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Entry> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String date = sc.next();
            int revenue = sc.nextInt();
            list.add(new Entry(date, revenue));
        }

        int x = sc.nextInt();
        List<Entry> result = new ArrayList<>();

        for (Entry e : list) {
            if (e.revenue >= x) result.add(e);
        }

        if (result.isEmpty()) {
            System.out.println("-1");
        } else {
            result.sort(Comparator.comparing(a -> a.date));
            for (Entry e : result) {
                System.out.println(e.date);
            }
        }
    }
}