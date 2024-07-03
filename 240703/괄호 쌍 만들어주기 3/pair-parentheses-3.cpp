#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int n=0;
    char c[101]{};
    cin.getline(c, 100);
    for(int i=0; i<100;i ++){
        if(c[i]!=0){
            n++;
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(c[i]=='('){
                if(c[j] ==')'){
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}