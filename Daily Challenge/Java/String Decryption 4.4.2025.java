import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split("-");
        TreeMap<Integer, String> map = new TreeMap<>();
        
        for (String p : s) {
            String num = "", ch = "";
            for (char c : p.toCharArray()) {
                if (Character.isDigit(c)) num += c;
                else ch += c;
            }
            map.put(Integer.parseInt(num), ch);
        }

        for (String val : map.values()) System.out.print(val);
        sc.close();
    }
}