#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n]{};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >>arr[i][j];
        }
    }
    int num=0;
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            for(int k=j; k<j+3; k++){
                if(arr[i][k]==1){       
                    num++;
                }
            }
            if(max<num){
                max=num;
            }
            num=0;
        }
    }
    cout << max;
    return 0;
}