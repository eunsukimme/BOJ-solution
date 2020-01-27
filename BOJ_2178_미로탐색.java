import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BOJ_2178_미로탐색 {
    public static void main(String arg[]){
        Scanner s = new Scanner(System.in);
        Queue<int[]> q = new LinkedList();
        int N = s.nextInt();
        int M = s.nextInt();
        int[][] maze = new int[N][M];
        for(int i = 0 ;i < N ;i++){
            String line = s.next();
            for(int j =0 ;j < M ; j++){
                maze[i][j] = line.charAt(j)/49;
            }
        }
        // 맨 처음 타일을 집어넣느다
        // x좌표, y좌표, 이동한 칸 수 를 저장
        q.offer(new int[]{0, 0, 1});
        int ans = -1;
        while(!q.isEmpty()){
            // 위치를 꺼낸다
            int[] cur = q.poll();
            // 도착하면 종료
            if(cur[0] == N - 1 && cur[1] == M - 1){
                ans = cur[2];
                break;
            }
            // 현재위치가 길이 아니거나 범위 벗어나면 패스한다
            else if(cur[0] < 0 || cur[0] >= N || cur[1] < 0 || cur[1] >= M || maze[cur[0]][cur[1]] != 1){
                continue;
            }
            // 만약 현재위치가 길이라면 네 방향의 타일을 담는다
            else {
                maze[cur[0]][cur[1]] = 2;   // 방문 표시
                q.offer(new int[]{cur[0]-1, cur[1], cur[2]+1});
                q.offer(new int[]{cur[0], cur[1]+1, cur[2]+1});
                q.offer(new int[]{cur[0]+1, cur[1], cur[2]+1});
                q.offer(new int[]{cur[0], cur[1]-1, cur[2]+1});
            }
        }
        System.out.println(ans);

    }
}
