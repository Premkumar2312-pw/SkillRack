import java.util.*;
import java.io.*;

public class Hello {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String filename = s.nextLine().trim();
        int total = 0;
        try {
            BufferedReader br = new BufferedReader(new FileReader(filename));
            String line;
            while ((line = br.readLine()) != null) {
                total += Integer.parseInt(line.trim());
            }
            br.close();
            System.out.print(total);
        } catch (Exception e) {
            System.out.print("FileNotFound");
        }
    }
}