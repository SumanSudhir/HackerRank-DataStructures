#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < n; j++){
        if(j-d%n >= 0){
            cout<<arr[j-d%n] << " ";
        }

        else if(j-d%n < 0){
            cout<<arr[d%n-j] << " ";
        }
    }

  return 0;
}
