import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for(int i=0;i<N;i++) arr[i]=sc.nextInt();
        int K = sc.nextInt();

        List<List<Integer>> res = new ArrayList<>();
        for(int i=0;i<N;i+=K)
            res.add(Arrays.asList(Arrays.copyOfRange(arr, i, Math.min(i+K,N))));
        res.sort(Comparator.comparingInt(a -> a.get(0)));
        for(List<Integer> block: res)
            for(int x:block)
                System.out.print(x + " ");
    }
}