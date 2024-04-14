#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s; 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = 0; 
    long long sum = a[0];
    int min_length = n + 1; 
    while (r < n) {
        if (sum < s) {
            r++; 
            sum += a[r]; 
        } else {
            min_length = min(min_length, r - l + 1); 
            sum -= a[l]; 
            l++; 
        }
    }

    if (min_length == n + 1) {
        cout << -1 << '\n'; 
    } else {
        cout << min_length << '\n';
    }

   
}