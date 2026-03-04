import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        Map<String,Integer> month = new HashMap<>();
        month.put("JAN",1); month.put("FEB",2); month.put("MAR",3);
        month.put("APR",4); month.put("MAY",5); month.put("JUN",6);
        month.put("JUL",7); month.put("AUG",8); month.put("SEP",9);
        month.put("OCT",10); month.put("NOV",11); month.put("DEC",12);

        List<String[]> dates = new ArrayList<>();

        for(int i=0;i<n;i++) {
            String[] parts = sc.nextLine().split("-");
            Arrays.sort(parts, Comparator.comparingInt(String::length));
            dates.add(parts);
        }

        Collections.sort(dates, (a,b) -> {
            if(Integer.parseInt(a[2]) != Integer.parseInt(b[2]))
                return Integer.parseInt(a[2]) - Integer.parseInt(b[2]);

            if(month.get(a[1].toUpperCase()) != month.get(b[1].toUpperCase()))
                return month.get(a[1].toUpperCase()) -
                       month.get(b[1].toUpperCase());

            return Integer.parseInt(a[0]) - Integer.parseInt(b[0]);
        });

        for(String[] d : dates)
            System.out.println(d[0]+"-"+d[1]+"-"+d[2]);
    }
}