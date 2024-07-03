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
    int k=0;
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            for(int k=j; k<j+2; k++){
                if(arr[i][k]==1){       
                    k++;
                    if(max<k){
                        max=k;
                    }
                }
            }
            k=0;
            
        }
    }
    cout << max;
    return 0;
}