import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        int[][] a = new int[n][2];

        Map<String, Integer> map = Map.of(
            "zero",0,"one",1,"two",2,"three",3,"four",4,
            "five",5,"six",6,"seven",7,"eight",8,"nine",9
        );

        for (int i = 0; i < n; i++) {
            String[] input = sc.nextLine().split(" ");
            StringBuilder cur = new StringBuilder();
            int num = 0;

            for (char ch : input[0].toCharArray()) {
                cur.append(ch);
                if (map.containsKey(cur.toString())) {
                    num = num * 10 + map.get(cur.toString());
                    cur.setLength(0);
                }
            }
            a[i][0] = num;
            a[i][1] = Integer.parseInt(input[1]);
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (a[i][0] == a[j][1])
                    System.out.print((j + 1) + " ");
    }
}