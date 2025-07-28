import java.util.*;

public class Main {
    static void permute(char[] arr, int l, Set<Integer> set) {
        if (l == arr.length)
            set.add(Integer.parseInt(new String(arr)));
        else {
            for (int i = l; i < arr.length; i++) {
                char t = arr[l]; arr[l] = arr[i]; arr[i] = t;
                permute(arr, l + 1, set);
                t = arr[l]; arr[l] = arr[i]; arr[i] = t;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next(), a = sc.next();
        Set<Integer> set = new TreeSet<>();
        permute(n.toCharArray(), 0, set);
        int ai = Integer.parseInt(a);
        for (int x : set)
            if (x >= ai) {
                System.out.println(x);
                break;
            }
    }
}