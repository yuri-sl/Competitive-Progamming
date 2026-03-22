#include <iostream>
using namespace std;

int main() {
    int n, x;
    int taxi = 0, c1 = 0, c2 = 0, c3 = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 4){ 
            taxi++;
        }else if (x == 3){ 
            c3++;
        } else if (x == 2) {
                c2++;
            }else if (x == 1){
                c1++;
            } 
    }

    while (c3 > 0) {
        c3--;
        if (c1 > 0) c1--;
        taxi++;
    }

    taxi += c2 / 2;
    c2 %= 2;

    if (c2 == 1) {
        taxi++;
        c1 -= min(c1, 2);
    }

    while (c1 > 0) {
        taxi++;
        c1 -= 4;
    }

    cout << taxi << endl;

    return 0;
}