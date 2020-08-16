#include <bits/stdc++.h>
using namespace std;

int n, arr[1001], dp[1001], answer;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i] = arr[i];
        for (int j = 1; j <= i - 1; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
        answer = max(answer, dp[i]);
    }
    cout << answer;
}