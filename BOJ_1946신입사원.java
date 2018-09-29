import java.util.*;

public class BOJ_1946신입사원 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int test_case = s.nextInt();
        for(int test = 0 ; test < test_case ; test++){
            int N = s.nextInt();
            // men[][0] = 서류 성적 순위
            // men[][1] = 면접 성적 순위
            ArrayList<int[]> men = new ArrayList<int[]>();
            for(int i = 0 ; i < N ; i++){
                men.add(new int[]{s.nextInt(), s.nextInt()});
            }
            // 한 기준(여기서는 men[][0]을 두고 정렬
            Collections.sort(men, new Comparator<int[]>(){
                @Override
                public int compare(int[] m1, int[] m2){
                    // 오름차순 정렬
                    if(m1[0] < m2[0]){
                        return -1;
                    }
                    else return 1;
                }
            });
            // 이제 각 랭킹을 조사한다
            // 첫 사람의 면접 점수가 합격 기준이다. 낮으면 무조건탈락
            int std = ((int[])men.get(0))[1];
            int pass = 1;
            for(int i = 1 ; i < N; i++){
                int[] me = men.get(i);
                if(me[1] < std){
                    pass++;
                    // 새로운 합격자가 등장
                    // 이 합격자의 면접 점수가 합격 기준이됨. 더 어려워졋다
                    // 이미 서류에서 밀린 뒤에사람들은 이 기준보다 높은 점수를 받아야 합격
                    std = me[1];
                }
            }
            // 합격자를 구한다
            System.out.println(pass);
        }
    }
}
