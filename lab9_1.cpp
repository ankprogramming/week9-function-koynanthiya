#include <iostream>

using namespace std;
void swap(int *a, int *b) {
        int nanthiya ;
        nanthiya = *a;
        *a = *b;
        *b = nanthiya;
    }
int main() {
    int a,b,cmd;
    cin >> a ;
    cin >> b ;
    do {
        cout << "menu\n1. swap()\n2. quit()" << endl;
        cin >> cmd;
        if(cmd == 1 ) {
            swap(&a,&b);
            cout <<a<<b
        }else { break;}

    } while (1);
    return 0;
}
