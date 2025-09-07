import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] height = new int[N];
        for (int i = 0; i < N; i++) height[i] = sc.nextInt();
        int X = sc.nextInt();

        int maxH = Arrays.stream(height).max().getAsInt();
        ArrayList<String> tot = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            for (int c = 0; c < X; c++) {
                StringBuilder bar = new StringBuilder();
                for (int j = 0; j < maxH - height[i]; j++) bar.append(".");
                for (int j = 0; j < height[i]; j++) bar.append("*");
                tot.add(bar.toString());
            }
        }

        for (int i = 0; i < maxH; i++) {
            for (String word : tot) {
                System.out.print(word.charAt(i) + " ");
            }
            System.out.println();
        }
    }
}