import java.util.*;
import java.math.BigInteger;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println(s.nextBigInteger().bitCount()); // input:22 → output:3
    }
}