import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine().trim();
        int N = sc.nextInt();
        sc.nextLine();
        String[] arr = new String[N];
        for (int i = 0; i < N; i++) arr[i] = sc.nextLine().trim();

        for (char ch : S.toCharArray()) {
            boolean found = false;
            for (String j : arr) {
                int mid = j.length() / 2;
                if (Character.toLowerCase(j.charAt(mid)) == Character.toLowerCase(ch)) {
                    System.out.println(j);
                    found = true;
                    break;
                }
            }
            if (!found) {
                if (arr.length > 0) {
                    int mid = arr[0].length() / 2;
                    for (int k = 0; k < mid; k++) System.out.print("*");
                    System.out.print(ch);
                    for (int k = mid + 1; k < arr[0].length(); k++) System.out.print("*");
                    System.out.println();
                } else {
                    System.out.println(ch);
                }
            }
        }
    }
}