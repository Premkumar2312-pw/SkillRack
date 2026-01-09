import java.util.*;

public class Hello {

    static int toMin(String t) {
        String[] p = t.split(":");
        return Integer.parseInt(p[0]) * 60 + Integer.parseInt(p[1]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] arr = new int[n][2];

        for (int i = 0; i < n; i++) {
            arr[i][0] = toMin(sc.next());
            arr[i][1] = toMin(sc.next());
        }

        Arrays.sort(arr, (a, b) -> a[0] - b[0]);

        int freeTime = 0, prevEnd = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i][0] > prevEnd)
                freeTime += arr[i][0] - prevEnd;

            prevEnd = Math.max(prevEnd, arr[i][1]);
        }

        freeTime += 1440 - prevEnd;
        System.out.println(freeTime);
    }
}