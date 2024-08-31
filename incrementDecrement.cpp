#include<iostream>
using namespace std;
int main(){
    int x = 1;
    cout<<x<<endl;
    x = x + 1; // now x becomes two
    x+=1; // now x becomes 3 
    x++; // now x becomes 4
    cout<<x<<endl; // here's the output which is 4
    x--; // now it will minus one from 4 means 4-1 = 3
    x-=1;
    x = x - 1;
    cout<<x<<endl;

    // int a = 10;
    // cout<<a<<endl;
    // cout<<a++<<endl;
    // cout<<a<<endl;

    int b = 11;
    cout<<b<<endl;
    cout<<++b<<endl;
    cout<<b<<endl;

}
