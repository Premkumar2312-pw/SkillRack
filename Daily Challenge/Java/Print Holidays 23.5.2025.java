import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<List<String>> cal = new ArrayList<>();

        while (sc.hasNextLine()) {
            String line = sc.nextLine().trim();
            if (!line.isEmpty()) {
                cal.add(Arrays.asList(line.split("\\s+")));
            }
        }

        int r = cal.size(), c = cal.get(0).size(), p = -1;
        String[] wd = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

        if (c == 7) {
            outer:
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    if (Character.isDigit(cal.get(i).get(j).charAt(0)) || cal.get(i).get(j).equals("#")) {
                        p = j;
                        break outer;
                    }
        } else {
            outer:
            for (int j = 0; j < c; j++)
                for (int i = 0; i < r; i++)
                    if (Character.isDigit(cal.get(i).get(j).charAt(0)) || cal.get(i).get(j).equals("#")) {
                        p = i;
                        break outer;
                    }
        }

        String[] d2w = new String[32];
        for (int i = 1; i <= 31; i++)
            d2w[i] = wd[(p + i - 1) % 7];

        Map<Integer, Integer> dc = new HashMap<>();
        int hc = 0;

        if (c == 7) {
            for (List<String> row : cal)
                for (String val : row) {
                    if (val.equals("#")) hc++;
                    else if (Character.isDigit(val.charAt(0))) {
                        int d = Integer.parseInt(val);
                        dc.put(d, dc.getOrDefault(d, 0) + 1);
                    }
                }
        } else {
            for (int j = 0; j < c; j++)
                for (int i = 0; i < r; i++) {
                    String val = cal.get(i).get(j);
                    if (val.equals("#")) hc++;
                    else if (Character.isDigit(val.charAt(0))) {
                        int d = Integer.parseInt(val);
                        dc.put(d, dc.getOrDefault(d, 0) + 1);
                    }
                }
        }

        for (int k : dc.keySet())
            if (dc.get(k) == 1) hc++;

        boolean found = false;
        for (int i = 1; i <= hc; i++) {
            if (!dc.containsKey(i)) {
                found = true;
                System.out.println(i + " " + d2w[i]);
            }
        }

        if (!found)
            System.out.println("-1");
    }
}