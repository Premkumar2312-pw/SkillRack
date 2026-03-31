import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        int[] freq = new int[256];

        for(char c : s.toCharArray())
            freq[c]++;

        int odd = 0;
        for(int i = 0; i < 256; i++)
            if(freq[i] % 2 != 0)
                odd++;

        if(odd <= 1)
            System.out.println("yes");
        else
            System.out.println("no");
    }
}