//Swap Two Variables
#include <iostream>
using namespace std;

int main(){
    int a,b;
    a = 5;
    b = 4;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}