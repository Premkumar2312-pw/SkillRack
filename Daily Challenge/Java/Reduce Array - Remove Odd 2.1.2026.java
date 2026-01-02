import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        ArrayList<Integer> l = new ArrayList<>();

        for (int i = 0; i < n; i++)
            l.add(sc.nextInt());

        while (true) {
            for (int i = 0; i < l.size(); i++)
                l.set(i, l.get(i) / 2);

            for (int x : l)
                System.out.print(x + " ");
            System.out.println();

            int j = 0;
            while (j < l.size()) {
                if (l.get(j) % 2 == 1)
                    l.remove(j);
                else
                    j++;
            }

            if (l.size() == 0)
                break;
        }
    }
}