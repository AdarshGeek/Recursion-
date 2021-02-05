// Print n to 1 in decreasing order using recursion
#include<iostream>
using namespace std;

void dec(int n){
    if(n==0)
        return;
    if (n==1)
        cout<<"1"<<endl;
    else
        cout<<n<<endl;
    dec(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    dec(n);
    return 0;
}

    