#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    int arr[101]{};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n ;j++){
            for(int k=j+1; k<=n; k++){
                if(arr[i]<=arr[j] && arr[j] <= arr[k]){
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}