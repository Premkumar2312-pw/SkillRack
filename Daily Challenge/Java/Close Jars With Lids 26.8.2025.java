import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> jar = new ArrayList<>();
        ArrayList<Integer> lid = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int val = sc.nextInt();
            if (val % 2 == 0) jar.add(val);
            else lid.add(val);
        }
        int cnt = 0;
        for (int i : jar) {
            Iterator<Integer> it = lid.iterator();
            while (it.hasNext()) {
                int val = it.next();
                if (val == i + 1) {
                    cnt++;
                    it.remove();
                    break;
                }
            }
        }
        System.out.println(cnt);
    }
}
