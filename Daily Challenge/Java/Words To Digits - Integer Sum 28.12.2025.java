import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        String[] l1 = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        String line = sc.nextLine();
        String[] words = line.split("\\s+");
        for(String i : words) {
            String c = "";
            for(int j = 0; j < i.length(); j++) {
                if(Character.isAlphabetic(i.charAt(j))) {
                    String d = "";
                    for(int k = j; k < i.length(); k++) {
                        if(Character.isAlphabetic(i.charAt(k))) {
                            d += i.charAt(k);
                            break;
                        }
                    }
                    for(int h = 0; h < 10; h++) {
                        if(l1[h].startsWith(d)) {
                            c = String.valueOf(h);
                            break;
                        }
                    }
                    break;
                } else if(Character.isDigit(i.charAt(j))) {
                    c = String.valueOf(i.charAt(j));
                    break;
                }
            }
            System.out.println(Integer.parseInt(c));
        }
        sc.close();
    }
}