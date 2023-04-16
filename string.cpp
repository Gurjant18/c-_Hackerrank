#include <iostream>
#include<conio.h>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int la=a.size();
    int lb=b.size();
    cout<<la<<" "<<lb<<endl;
    cout<<a+b<<endl;
    char tm;
    tm=a[0];
    a[0]=b[0];
    b[0]=tm;
    cout<<a<<" "<<b;
    getch();
    return 0;
}