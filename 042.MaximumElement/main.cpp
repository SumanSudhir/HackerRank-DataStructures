#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class stack{
    int top;

public:
    int a[100000];
    stack() { top = -1;}
    void push(int x);
    void pop();
    int peek();
    bool isEmpty();
};

void stack::push(int x){
    a[++top] = x;
}

void stack::pop(){
     a[top--];
}

int stack::peek(){
    return a[top];
}

bool stack::isEmpty(){
    if(top < 0){
        return 1;
}
    return 0;
}

int maxValue(stack s){
    int max = 0;
    while(!s.isEmpty()){
        if(s.peek()>max)
            max = s.peek();
        s.pop();
    }

    return max;
}


int main(){
    int n;
    cin>>n;
    int x,y;
    class stack s;
    class stack temp;
    int num_elems = 0;
    int argmax;



    int max  = 0;
    for(int i=0;i<n;i++){
        cin>>x;

        if(x == 1){
            cin>>y;
            s.push(y);
            num_elems++;

            if(max<y){
                max = y;
                argmax = num_elems;
            }
        }

        if(x == 2){
            if(argmax == num_elems){    //comapre  index of max value instead of max to value to be removed
                s.pop();
                temp = s;
                max = maxValue(temp);
                argmax--;
            }
            else{
                s.pop();
            }
            num_elems--;
        }


        if(x == 3){
            cout<<max<<endl;
        }
    }


}
