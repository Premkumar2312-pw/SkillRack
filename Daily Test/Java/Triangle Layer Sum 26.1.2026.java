import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int rows = (n + 1) / 2;
        int mid  = n / 2;
        int sum = 0;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < n; j++){
                int val = s.nextInt();

                if(i == 0 && j == mid){
                    sum += val;
                }
                else if(i == rows - 1 && val != 0){
                    sum += val;
                }
                else if(j == mid - i || j == mid + i){
                    sum += val;
                }
            }
        }
        System.out.println(sum);
    }
}