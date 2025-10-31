import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        for (int i=0; i<n; i++)
            l[i] = sc.next();
        ArrayList<Integer> l1 = new ArrayList<>();
        for (String s : l) {
            int maxVal = Integer.MIN_VALUE;
            for (int j=0; j<s.length(); j++) {
                String newNumStr = s.substring(0,j) + s.charAt(j);
                int repeatCount = s.charAt(j) - '0';
                String repeatedStr = new String(new char[repeatCount]).replace("", String.valueOf(s.charAt(j)));
                newNumStr = s.substring(0,j) + repeatedStr + s.substring(j+1);
                int val = Integer.parseInt(newNumStr);
                if(val > maxVal) maxVal = val;
            }
            l1.add(maxVal);
        }
        Collections.sort(l1);
        for (int num : l1)
            System.out.print(num + " ");
    }
}