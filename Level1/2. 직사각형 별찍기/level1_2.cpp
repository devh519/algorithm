#include <iostream>

using namespace std;

// 내 코드
int main(void) {
    int a;
    int b;
    
    cin >> a >> b;
    
    for(int i=0; i<b; i++) {
        for(int j=0; j<a; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

// 다른 방법
int main(void) {
    int a;
    int b;

    cin >> a >> b;

    string s;
    s.append(a, '*');

    for(int i=0; i<b; i++) {
        cout << s << endl;
    }

    return 0;
}