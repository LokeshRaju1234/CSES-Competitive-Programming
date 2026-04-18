#include <bits/stdc++.h>
using namespace std;
int Solve(vector<int>& ans,int& size)
{
    int ans1 = 0;
    unordered_map<int,int>map;
   
    //storing all the numbers in map
    for(int num : ans)
    {
        map[num]++;
    }

    for(int i = 1;i <= size;i++)
    {
        if(map[i] == 0)
        {
            ans1 = i;//we found the missing number
            break;
        }
    }

    return ans1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size;
    cin>>size;
    vector<int>ans(size - 1);
    for(int i = 0;i < size - 1;i++)
    {
        cin>>ans[i];
    }

    int missingNumber = Solve(ans,size);
    cout<<missingNumber<<" ";
    return 0;
}