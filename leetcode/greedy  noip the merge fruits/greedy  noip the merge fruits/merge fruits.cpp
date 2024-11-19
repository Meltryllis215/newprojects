#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    priority_queue<int,
        vector<int>,
        greater<int>>q; //Ð¡¸ù¶Ñ

    int n, x; 
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>x, q.push(x);

    int res = 0;
    while (q.size() > 1) {
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        res += a + b;
        q.push(a + b);
    }
    cout<<res;
    return 0;
}