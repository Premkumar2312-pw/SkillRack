import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<String> list = new ArrayList<>();
        for(int i=0;i<n;i++) list.add(sc.nextLine());

        list.sort((a,b)->{
            int n1 = Integer.parseInt(a.substring(0,2));
            int n2 = Integer.parseInt(b.substring(0,2));
            if(n1 != n2) return Integer.compare(n2, n1); // descending
            String s1 = a.substring(2,4), s2 = b.substring(2,4);
            int cmp2 = s1.compareTo(s2);
            if(cmp2 != 0) return cmp2;
            int m1 = Integer.parseInt(a.substring(4));
            int m2 = Integer.parseInt(b.substring(4));
            return Integer.compare(m1, m2);
        });

        for(String s : list) System.out.println(s);
    }
}