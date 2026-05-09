#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int disks, int source, int auxillary, int destination)
{
    if (disks == 1)
    {
        cout << source << " " << destination << endl;
        return;
    }

    // move smaller disks from A to B using c as helper
    TowerOfHanoi(disks - 1, source, destination, auxillary);
    // move larger disk finally to C
    cout << source << " " << destination << endl;
    // then finally move smaller disks from B to C using A
    TowerOfHanoi(disks - 1, auxillary, source, destination);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    // total moves will be 2 to the power of n and - 1
    cout << pow(2, n) - 1 << endl;
    TowerOfHanoi(n, 1, 2, 3);
    return 0;
}