import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for(int i=0; i<n; i++) l[i] = sc.next();
        ArrayList<Integer> r = new ArrayList<>();
        for(String i : l) {
            char minc = i.charAt(0), maxc = i.charAt(0);
            for(int j=1; j<i.length(); j++) {
                if(i.charAt(j)<minc) minc=i.charAt(j);
                if(i.charAt(j)>maxc) maxc=i.charAt(j);
            }
            int a = minc - '0', b = maxc - '0';
            String c = "";
            if(i.charAt(0) < i.charAt(i.length()-1)) {
                for(int j=a; j<=b; j++) c += Integer.toString(j);
            } else {
                for(int j=b; j>=a; j--) c += Integer.toString(j);
            }
            r.add(Integer.parseInt(c));
        }
        Collections.sort(r);
        for(int x : r) System.out.print(x + " ");
    }
}