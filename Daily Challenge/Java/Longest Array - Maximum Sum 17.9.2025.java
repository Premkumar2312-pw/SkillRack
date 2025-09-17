import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = 0, j = 0;
        List<List<Integer>> l = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            int len = sc.nextInt(), sumj = 0, sumi = 0;
            List<Integer> r = new ArrayList<>();
            for(int x = 0; x < len; x++) r.add(sc.nextInt());
            l.add(r);
            if(m < len) { m = len; j = i; }
            else if(m == len) {
                for(int k = 0; k < l.get(j).size(); k++) sumj += l.get(j).get(k);
                for(int k = 0; k < r.size(); k++) sumi += r.get(k);
                if(sumj < sumi) j = i;
            }
        }
        int res = 0;
        for(int k = 0; k < l.get(j).size(); k++) res += l.get(j).get(k);
        System.out.println(res);
    }
}