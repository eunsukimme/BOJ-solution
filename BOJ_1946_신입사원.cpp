#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<pair<int, int>> people;
        for (int j = 0; j < N; j++)
        {
            int score1, score2;
            pair<int, int> scores;
            cin >> scores.first >> scores.second;
            people.push_back(scores);
        }
        sort(people.begin(), people.end(), compare);

        int top = people[0].second;
        int success = 1;
        for (int j = 0; j < N; j++)
        {
            if (top == 1)
            {
                break;
            }
            if (people[j].second < top)
            {
                success++;
                top = people[j].second;
            }
        }
        cout << success << endl;
    }

    return 0;
}