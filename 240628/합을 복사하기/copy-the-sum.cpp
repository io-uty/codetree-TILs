#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 1, b=2, c=3;
    int tmpA =a;
    int tmpB = b;
    a = a+b+c;
    b = tmpA+b+c;
    c = tmpA+tmpB+c;
    cout << a <<" "<<b<< " " << c; 
    return 0;
}