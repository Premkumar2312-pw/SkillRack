import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[][] l = new int[n][2];
        for (int i = 0; i < n; i++) {
            l[i][0] = sc.nextInt();
            l[i][1] = sc.nextInt();
        }

        ArrayList<Integer> l1 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (l[i][1] == l[j][1]) {
                    if (l[i][0] > l[j][0])
                        l1.add(l[i][0] - l[j][0]);
                    else
                        l1.add(l[j][0] - l[i][0]);
                }
            }
        }

        if (l1.isEmpty()) {
            System.out.print(-1);
        } else {
            Collections.sort(l1);
            for (int x : l1)
                System.out.print(x + " ");
        }
    }
}