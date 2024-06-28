#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n]{};
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    int min=1000;
    int sum=0;
    int k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j){
                k=i-j;
            }else{
                k=j-i;
            }
            sum+=k*arr[j];
        }
        if(sum < min){
            min = sum;
            sum=0;
        }else{
            sum=0;
        }
    }
    cout << min;
    return 0;
}