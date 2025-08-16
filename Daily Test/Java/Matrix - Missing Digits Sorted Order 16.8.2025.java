import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt(), c = sc.nextInt();
        String[][] a = new String[r][c];
        for (int i=0;i<r;i++)
            for (int j=0;j<c;j++)
                a[i][j] = sc.next();

        for (int i0=0;i0<r;i0+=3) {
            for (int j0=0;j0<c;j0+=3) {
                HashSet<Integer> seen = new HashSet<>();
                ArrayList<int[]> holes = new ArrayList<>();
                for (int i=i0;i<i0+3;i++) {
                    for (int j=j0;j<j0+3;j++) {
                        if (a[i][j].equals("-"))
                            holes.add(new int[]{i,j});
                        else
                            seen.add(Integer.parseInt(a[i][j]));
                    }
                }
                ArrayList<String> miss = new ArrayList<>();
                for (int num=1; num<=9; num++)
                    if (!seen.contains(num)) miss.add(String.valueOf(num));
                for (int k=0;k<holes.size();k++)
                    a[holes.get(k)[0]][holes.get(k)[1]] = miss.get(k);
            }
        }

        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++)
                System.out.print(a[i][j]+" ");
            System.out.println();
        }
    }
}