import java.util.Scanner;

public class BOJ_1924_2007년 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int[] M = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String[] D = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        int month = s.nextInt();
        int day = s.nextInt();
        int sum =0;
        for(int i = 0 ; i < month ; i++){
            sum+=M[i];
        }
        sum+=day;
        System.out.println(D[sum%7]);
    }

}
