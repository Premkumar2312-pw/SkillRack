import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = Integer.parseInt(in.nextLine());
        String[] val = in.nextLine().split(" ");
        ArrayList<Integer> ans = new ArrayList<>();
        for (String i : val) {
            String s = "";
            String sign = "";
            boolean found = false;
            for (int j = 0; j < i.length() - 1; ++j) {
                if (i.charAt(j) == i.charAt(j+1) && !Character.isDigit(i.charAt(j))) {
                    sign += i.charAt(j);
                    found = true;
                    break;
                } else {
                    s += i.charAt(j);
                }
            }
            if (sign.isEmpty())
                ans.add(Integer.parseInt(i));
            else if (sign.equals("+"))
                ans.add(Integer.parseInt(s) + 1);
            else
                ans.add(Integer.parseInt(s) - 1);
        }
        int sum = 0;
        for (int x : ans) sum += x;
        System.out.println(sum);
        in.close();
    }
}