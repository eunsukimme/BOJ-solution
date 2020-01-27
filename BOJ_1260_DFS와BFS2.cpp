#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void DFS(vector<vector<int>> &map);
void BFS(vector<vector<int>> &map);
int N, M, start;
int main()
{
  cin >> N >> M >> start;
  vector<vector<int>> map(N + 1, vector<int>(N + 1, 0));
  for (int i = 0; i < M; i++)
  {
    int row, col;
    cin >> row >> col;
    map[row][col] = 1;
    map[col][row] = 1;
  }
  DFS(map);
  BFS(map);

  return 0;
}
void DFS(vector<vector<int>> &map)
{
  stack<int> s;
  vector<int> isVisited(N + 1, 0);
  s.push(start);
  while (!s.empty())
  {
    int node = s.top();
    s.pop();

    if (isVisited[node] == 0)
    {
      cout << node << " ";
      isVisited[node] = 1;
    }
    for (int nearNode = N; nearNode > 0; nearNode--)
    {
      if (map[node][nearNode] == 1 && isVisited[nearNode] == 0)
      {
        s.push(nearNode);
      }
    }
  }
  cout << endl;
}
void BFS(vector<vector<int>> &map)
{
  queue<int> q;
  vector<int> isVisited(N + 1, 0);
  q.push(start);
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    if (isVisited[node] == 0)
    {
      cout << node << " ";
      isVisited[node] = 1;
    }
    for (int nearNode = 1; nearNode < N + 1; nearNode++)
    {
      if (map[node][nearNode] == 1 && isVisited[nearNode] == 0)
      {
        q.push(nearNode);
      }
    }
  }
}