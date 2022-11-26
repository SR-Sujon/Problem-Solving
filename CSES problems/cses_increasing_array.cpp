#include<iostream>
using namespace std;
int main(){
    long long int N=0,i=0,moves=0;
    cin >> N;
    long long int arr[N];
    for(i=0;i<N;i++){
        cin >> arr[i];
    }
    
    for(i=0;i<N-1;i++){
        while(arr[i]>arr[i+1]){
            arr[i+1]++;
            moves++;
            //cout << "Index: " << i+1 << " Value: " << arr[i+1] << endl; 
        }
    }
    cout << moves << endl;
    
    return 0;
}