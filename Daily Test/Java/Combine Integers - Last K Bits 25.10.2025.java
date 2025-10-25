import java.util.*;

public class Hello {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] nums = new int[N];
        for (int index = 0; index < N; index++)
            nums[index] = sc.nextInt();
        int k = sc.nextInt();
        int mask = (1 << k) - 1;
        int sum = nums[0];
        int currLast = nums[0] & mask;
        for (int index = 1; index < N; index++) {
            if (currLast == (nums[index] & mask)) {
                sum += nums[index];
            } else {
                System.out.print(sum + " ");
                sum = nums[index];
                currLast = nums[index] & mask;
            }
        }
        System.out.println(sum);
    }
}