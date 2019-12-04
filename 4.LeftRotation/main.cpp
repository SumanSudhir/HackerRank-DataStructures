#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    vector<int> left_arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++){
        if(j-d%n >= 0){
            left_arr[j-d%n] = arr[j];
        }

        else if(j-d%n < 0){
            left_arr[n-d%n+j] = arr[j];
        }
    }

    for(int k = 0; k < n; k++){
        cout<<left_arr[k]<<" ";
    }

  return 0;
}
