#include<bits/stdc++.h>
using namespace std;

int arrayNesting(vector<int>& nums)
{
    int sz = nums.size();
    vector<bool> visited(sz, false);
    int answer = 0, current_answer, current_pos;
    for(int i = 0; i < sz; i++)
    {
        if(visited[i] == false)
        {
            visited[i] = true;
            current_answer = 1;
            current_pos = i;
            while(nums[current_pos] != i)
            {
                current_pos = nums[current_pos];
                visited[current_pos] = true;
                current_answer++;
            }
            answer = max(answer, current_answer);
        }
    }
    return answer;
}

int main()
{
    vector<int> nums = {5, 4, 0, 3, 1, 6, 2};
    cout << arrayNesting(nums) << endl;
    return 0;
}
