import java.util.*;

public class PowerOfTwoSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] l = new int[n];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            l[i] = sc.nextInt();
            sum += l[i];
        }
        int d = 1;
        while(true) {
            d *= 2;
            if(sum <= d) {
                System.out.println(d);
                break;
            }
        }
    }
}