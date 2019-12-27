#include<bits/stdc++.h>

using namespace std;

int equalStacks(vector<int> a1,vector<int> a2, vector<int> a3){
    // stack<int> s1;
    // stack<int> s2;
    // stack<int> s3;

    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int max = 0;

    while(true){

        if(i < a1.size()){
            sum1 = sum1 + a1[i];
        }

        if(i < a2.size()){
            sum2 = sum2+ a2[i];
        }

        if(i < a3.size()){
            sum3 = sum3 + a3[i];
        }

        if(sum1 == sum2 && sum2 == sum3){
            max = sum1;
        }

        if(i >= a1.size() || i >= a2.size() || i >= a3.size()){
            return max;
            break;
        }

        return 0;
    }
 }


int main(){

    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    // int a1[n1],a2[n2],a3[n3];

    vector<int> a1;
    vector<int> a2;
    vector<int> a3;

    for(int i=0;i<n1;i++){
        int x;
        cin >> x;
        a1.push_back(x);

    }

    for(int i=0;i<n2;i++){
        int x;
        cin >> x;
        a2.push_back(x);
    }

    for(int i=0;i<n3;i++){
        int x;
        cin >> x;
        a3.push_back(x);
    }

    cout<<equalStacks(a1,a2,a3)<<endl;

}
