import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<String> l = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            l.add(sc.nextLine().trim());
        }
        int len0 = l.get(0).length();
        for(int i = 0; i < len0; i++) {
            int c = -1;
            StringBuilder a = new StringBuilder();
            for(int j = 0; j < n; j++) {
                if(l.get(j).charAt(i) != '-') {
                    if(c == -1) {
                        a.append(l.get(j).charAt(i));
                    }
                    if(j == a.length()) {
                        for(int k = 0; k < len0; k++) {
                            int f = 0;
                            for(int m = 0; m < n; m++) {
                                if(l.get(m).charAt(k) == a.charAt(0) && f == 0) {
                                    l.set(m, l.get(m) + a.toString());
                                    f = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        l.sort((x, y) -> Integer.compare(x.length(), y.length()));
        for(String s : l) {
            System.out.println(s);
        }
        sc.close();
    }
}