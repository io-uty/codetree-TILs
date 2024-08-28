#include <iostream>
#include <array>
using namespace std;

int main() {
    int n;
    cin >> n;
    string cmd;

    int* arr = new int[n];
    int size=0;
    int A;
    while(n--){
        cin >> cmd;
        if(cmd=="push_back"){
            cin >> A;
            arr[size] = A;
            size++;
        }else if(cmd=="pop_back"){
            arr[size] = 0;
            size--;
        }else if(cmd=="size"){
            cout << size << "\n";
        }else if(cmd=="get"){
            cin >> A;
            cout << arr[A-1] << "\n";
        }
    }
    return 0;
}