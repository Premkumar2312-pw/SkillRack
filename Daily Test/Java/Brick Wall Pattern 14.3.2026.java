import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int l = sc.nextInt();
        int h = sc.nextInt();
        int r = sc.nextInt();
        int c = sc.nextInt();

        int k = l/2;

        for(int i=0;i<r;i++){

            int t=(r-i-1)%4;

            for(int x=0;x<h;x++){

                StringBuilder row=new StringBuilder();

                if(t==0){
                    for(int j=0;j<c;j++)
                        row.append(j%2==0?'*':'#');
                }
                else if(t==1){
                    for(int j=0;j<k;j++) row.append('#');
                    for(int j=0;j<c;j++)
                        row.append(j%2==0?'*':'#');
                }
                else if(t==2){
                    for(int j=0;j<c;j++)
                        row.append(j%2==0?'#':'*');
                }
                else{
                    for(int j=0;j<k;j++) row.append('*');
                    for(int j=0;j<c;j++)
                        row.append(j%2==0?'#':'*');
                }

                System.out.println(row.substring(0,c));
            }
        }
    }
}