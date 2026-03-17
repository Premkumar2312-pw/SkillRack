import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        char a = sc.next().charAt(0);
        String b = sc.next();
        String c = sc.next();

        int r = b.charAt(1) - '0';
        int col = b.charAt(0) - 'a';

        int tr = c.charAt(1) - '0';
        int tc = c.charAt(0) - 'a';

        List<int[]> moves = new ArrayList<>();

        if(a == 'R'){
            for(int i=0;i<8;i++){
                moves.add(new int[]{r,i});
                moves.add(new int[]{i,col});
            }
        }
        else if(a == 'B'){
            for(int i=1;i<8;i++){
                if(r+i<8 && col+i<8) moves.add(new int[]{r+i,col+i});
                if(r+i<8 && col-i>=0) moves.add(new int[]{r+i,col-i});
                if(r-i>=0 && col+i<8) moves.add(new int[]{r-i,col+i});
                if(r-i>=0 && col-i>=0) moves.add(new int[]{r-i,col-i});
            }
        }
        else{
            int[] dr = {2,2,-2,-2,1,1,-1,-1};
            int[] dc = {1,-1,1,-1,2,-2,2,-2};

            for(int i=0;i<8;i++){
                int nr=r+dr[i], nc=col+dc[i];
                if(nr>=0 && nr<8 && nc>=0 && nc<8)
                    moves.add(new int[]{nr,nc});
            }
        }

        boolean found=false;
        for(int[] m:moves){
            if(m[0]==tr && m[1]==tc){
                found=true;
                break;
            }
        }

        System.out.println(found?"Yes":"No");
    }
}