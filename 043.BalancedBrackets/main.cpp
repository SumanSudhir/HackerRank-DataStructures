#include<bits/stdc++.h>

using namespace std;

string isBalanced(string s) {

    stack <char> c;
    char closing;


    for(int i=0;i<s.length();i++){
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')){
            c.push(s[i]);
        }

        if((s[i] == ')') || (s[i] == '}') || (s[i] == ']')){

        // else{

            if(c.empty()){
                return "NO";
            }

            if(c.top() == '('){
                closing = ')';
            }

            if(c.top() == '['){
                closing = ']';
            }

            if(c.top() == '{'){
                closing = '}';
            }

            if(s[i] != closing){
                return "NO";
            }

            else{c.pop();}
        }
    }

    if(!c.empty()){
        return "NO";
    }

    return "YES";
}



int main(){

    int n;
    cin>>n;
    string s;
    string result;

    for(int i=0; i<n;i++){
        cin>>s;
        result = isBalanced(s);
        cout<<result<<endl;

    }
}
