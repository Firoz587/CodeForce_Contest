#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int seconds = 0;
        while (N > 0) {
            if (N == 1 || N == 3) {
                seconds++;
                break;
            }
            else if(N==2)
            {
                seconds+=2;
                break;
            }
            N -= 2;
            seconds++;
        }
        cout << seconds << endl;
    }
    return 0;
}
