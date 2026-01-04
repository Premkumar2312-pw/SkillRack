import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());
        List<int[]> res = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int x = sc.nextInt();

            String[] parts = s.split("-");
            int a = Integer.parseInt(parts[0]);
            int b = Integer.parseInt(parts[1]);

            if (a < x && x < b) {
                res.add(new int[]{a, x});
                res.add(new int[]{x, b});
            } else {
                res.add(new int[]{a, b});
            }
        }

        res.sort(Comparator.comparingInt(o -> o[0]));

        for (int[] p : res)
            System.out.println(p[0] + "-" + p[1]);
    }
}