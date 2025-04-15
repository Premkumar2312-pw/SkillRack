import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[][] m = new String[12][12];
        for (int i = 0; i < 12; i++)
            for (int j = 0; j < 12; j++)
                m[i][j] = sc.next();

        List<Map.Entry<Integer, String>> res = new ArrayList<>();

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                String val = m[i][j];
                if (val.equals("A") || val.equals("P")) {
                    int h = i + 1;
                    int mins = j * 5;
                    int th = (h == 12) ? (val.equals("A") ? 0 : 12) : (val.equals("A") ? h : h + 12);
                    int total = th * 60 + mins;
                    int disp_h = (h == 12 || h == 0) ? 12 : h;
                    String time = String.format("%02d:%02d %sM", disp_h, mins, val);
                    res.add(Map.entry(total, time));
                }
            }
        }

        res.sort(Comparator.comparingInt(Map.Entry::getKey));
        for (var pair : res)
            System.out.println(pair.getValue());
    }
}
