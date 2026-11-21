#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];
    for(int i = 0; i < N; i++) {   // fix 1: < not <=
        cin >> arr[i];
    }

    int current_sum = arr[0];
    int max_profit = arr[0];

    for(int i = 1; i < N; i++) {   // start from index 1, since 0 is already seeded
        current_sum += arr[i];

        if(current_sum > max_profit) {  // fix 2: > not 
            max_profit = current_sum;
        }

        if(current_sum < 0) {           // fix 3: check max before reset
            current_sum = 0;
        }
    }

    cout << max_profit << endl;
    return 0;
}