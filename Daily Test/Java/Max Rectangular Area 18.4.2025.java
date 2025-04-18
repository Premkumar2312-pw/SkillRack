import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int l = sc.nextInt();
        int b = sc.nextInt();

        int h = sc.nextInt();
        int[] hc = new int[h + 2];
        hc[0] = 0;
        for (int i = 1; i <= h; i++)
            hc[i] = sc.nextInt();
        hc[h + 1] = l;
        Arrays.sort(hc);

        int v = sc.nextInt();
        int[] vc = new int[v + 2];
        vc[0] = 0;
        for (int i = 1; i <= v; i++)
            vc[i] = sc.nextInt();
        vc[v + 1] = b;
        Arrays.sort(vc);

        int mh = 0, mw = 0;
        for (int i = 0; i < h + 1; i++)
            mh = Math.max(mh, hc[i + 1] - hc[i]);
        for (int i = 0; i < v + 1; i++)
            mw = Math.max(mw, vc[i + 1] - vc[i]);

        System.out.println(mh * mw);
    }
}