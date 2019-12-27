#include<bits/stdc++.h>

using namespace std;

int equalStacks(vector<int> a1,vector<int> a2, vector<int> a3){
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;

    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int max = 0;


    int n1 = a1.size();
    int n2 = a2.size();
    int n3 = a3.size();

    while(true){

        if(i < n1){
            sum1 = sum1 + a1.back();
            s1.push(a1.back());
            a1.pop_back();
        }

        if(i < n2){
            sum2 = sum2+ a2.back();
            s2.push(a2.back());
            a2.pop_back();
        }

        if(i < n3){
            sum3 = sum3 + a3.back();
            s3.push(a3.back());
            a3.pop_back();
        }

        if(i >= n1 && i >= n2 && i >= n3){
            break;
        }
        i++;
    }

    while((sum1 != sum2) || (sum2 != sum3)){

        if((sum1 >= sum2) && (sum1 >= sum3)){
            sum1 = sum1 - s1.top();
            s1.pop();
        }

        else if((sum2 > sum1) && (sum2 >= sum3)){
            sum2 = sum2 - s2.top();
            s2.pop();
        }

        else if((sum3 > sum2) && (sum3 > sum1)){
            sum3 = sum3 - s3.top();
            s3.pop();
        }

    }

    return sum1;
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
