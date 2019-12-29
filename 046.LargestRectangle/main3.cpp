#include<bits/stdc++.h>

using namespace std;


int largestRectangle(stack<int> s){

    stack<int> s1;
    int count = 1;
    int maxArea = 0;
    int min = s.top();

    while(s1.empty()){
        s = s1;
        int count = 1;
        int min = s.top();t
        while(!s.empty()){
            if(min<s.top){
                min = s.top();
            }
            if(maxArea < count*min){
                maxArea = count*min;
            }
            s.pop();
            count++;
        }
        s1.pop();
    }
    return maxArea;
}
int main(){
    int n;
    cin>>n;
    stack<int> s;

    for(int i = 0; i<n; i++){
        int temp;
        cin >> temp;
        s.push(temp);
    }
    cout<<largestRectangle(s);
}
