import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        String current = "";
        for (int i = 0; i < N; i++) {
            String word = sc.nextLine();
            if (current.isEmpty()) {
                current = word;
            } else {
                String fc = current.substring(0,i);
                current = fc + word;
            }
            System.out.println(current);
        }
        sc.close();
    }
}