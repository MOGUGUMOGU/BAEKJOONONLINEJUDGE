#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> stack;

void push(int x){
    stack.push_back(x);
}

void pop(){
    if(stack.size() > 0){
        cout << stack.back() <<endl;
        stack.pop_back();
    }else{
        cout << -1 << endl;
    }
}

void size(){
    cout << stack.size() << endl;
}

void empty(){
    if(stack.size()>0){
        cout << 0 << endl;
    }else{
        cout << 1 << endl;
    }
}

void top(){
    if(stack.size()>0){
        cout << stack.back() << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    int n, x;
    cin >> n;
    string cmd;
    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd.compare("push") == 0){
            cin >> x;
            push(x);
        }else if(cmd.compare("pop") == 0){
            pop();
        }else if(cmd.compare("size") == 0){
            size();
        }else if(cmd.compare("top") == 0){
            top();
        }else if(cmd.compare("empty") == 0){
            empty();
        }
    }
}