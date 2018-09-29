import java.util.Scanner;

public class BOJ_1773_폭죽쇼 {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int C = s.nextInt();
        int[] n = new int[N];
        int count = 0;
        for(int i = 0 ;i < N ;i++){
            n[i] = s.nextInt();
        }
        for(int i = 1 ; i <= C ; i++){
            for(int j = 0 ; j < N ; j++){
                if(i%n[j]==0){
                    count++;
                    break;
                }
            }
        }
        System.out.println(count);
    }
}
