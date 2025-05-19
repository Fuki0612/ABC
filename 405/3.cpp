#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    long long sum = 0, squareSum = 0;
    
    for (int i = 0; i < N; i++){
        cin >> A[i];
        sum += A[i];
        squareSum += A[i] * A[i];
    }
    
    long long result = (sum * sum - squareSum) / 2;
    
    cout << result << endl;
    return 0;
}