#include <iostream>
using namespace std;
int main() {
    int n;
    int a = 1, b = 1, c, d = 3;
    cin >> n;
    if (n >= 2) {
        cout << "1" << endl;
        cout << "1" << endl;
        while (n >= d) {
            c = a + b;
            cout << c << endl;
            b = a;
            a = c;
            d = d + 1;
        }
    }
       else if (n<2){
           cout << "errore"<< endl;
       }
    return 0;
}
