import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();
        String[][] m = new String[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                m[i][j] = sc.next();
            }
        }
        char ch = sc.next().charAt(0);
        int f = ch, b = ch;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(m[i][j].equals("1")){
                    System.out.print((char)f + " ");
                    if(Character.isLowerCase(f))
                        f = 'a' + (f-'a'+1)%26;
                    else
                        f = 'A' + (f-'A'+1)%26;
                } else {
                    System.out.print((char)b + " ");
                    if(Character.isLowerCase(b))
                        b = 'a' + (b-'a'-1+26)%26;
                    else
                        b = 'A' + (b-'A'-1+26)%26;
                }
            }
            System.out.println();
        }
    }
}