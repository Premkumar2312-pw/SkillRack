import java.util.*;
import java.io.*;

public class Hello {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        String file1 = sc.nextLine();
        String file2 = sc.nextLine();

        Map<Integer, String> nameMap = new HashMap<>();
        Map<Integer, String> desMap = new HashMap<>();

        BufferedReader br1 = new BufferedReader(new FileReader(file1));
        int n = Integer.parseInt(br1.readLine().trim());
        for (int i = 0; i < n; i++) {
            String[] parts = br1.readLine().split(" ");
            nameMap.put(Integer.parseInt(parts[0]), parts[1]);
        }
        br1.close();

        BufferedReader br2 = new BufferedReader(new FileReader(file2));
        br2.readLine();
        for (int i = 0; i < n; i++) {
            String[] parts = br2.readLine().split(" ");
            desMap.put(Integer.parseInt(parts[0]), parts[1]);
        }
        br2.close();

        List<Integer> ids = new ArrayList<>(nameMap.keySet());
        Collections.sort(ids);

        for (int id : ids) {
            System.out.println(id + " " + nameMap.get(id) + " " + desMap.get(id));
        }
    }
}