#include <iostream>
using namespace std;

int main() {
    int N;
    //let user input one number.
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
    }

    //iteration count = n/2 -> O(n)
}