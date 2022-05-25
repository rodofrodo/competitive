#include <iostream>
using namespace std;

int main()
{
    // getting range of fibonacci's numers
    int n;
    cin>>n;
    int fib[1e5];
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<n;i++)
        fib[i]=fib[i-1]+fib[i-2];
    cout<<fib[n-1]<<endl;
    return 0;
}
