#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i = 0; i < 7; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << a << endl;
    }
    return 0;
}