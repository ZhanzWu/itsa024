// 024.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r,fans=0.0; int n, p,i,ans;
    cin >> r >> n >> p;
    for (i = 1; i <= n; i++)
    {
        fans += p; fans *= (r+1);
    }
    ans = floor(fans);
    cout << ans;
}

