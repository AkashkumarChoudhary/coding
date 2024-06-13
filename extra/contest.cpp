#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int minOperations(vector<int>& a, int N, int K) { int result = 0;

// Initialize the array with the difference between a[i] and i 
for (int i = 1; i <= N / 2; i++) { 
    a[i] = abs(a[i] - i); }

// Sort the array 
sort(a.begin(), a.begin() + N / 2);

// Find the minimum number of operations 
int curr = a[0];
 for (int i = 1; i < N / 2; i++) { 
    if (a[i] != curr) {
         int diff = a[i] - curr; 
         int numOps = (diff - 1) / K + 1; 
         result += numOps; 
         curr += numOps * K;
          }
     }

return result; }

int main() { int N, K; cin >> N >> K;

vector<int> a(N + 1); for (int i = 1; i <= N; i++) { cin >> a[i]; }

cout << minOperations(a, N, K) << endl;

return 0; 
}