#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int pow4[10];
    for (int i = 0; i < 10; i++) {
        pow4[i] = i * i * i * i;
    }
    
    int start = max(1000, N);
    int end = min(9999, M);
    
    for (int num = start; num <= end; num++) {
        int temp = num;
        int sum = 0;
        while (temp) {
            int digit = temp % 10;
            sum += pow4[digit];
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }
    
    return 0;
}