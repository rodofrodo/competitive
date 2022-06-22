#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==0||n==1) { cout<<"not\n"; return; }
    for(int i=2;i*i<=n;i++) { if(n%i==0) { cout<<"not\n"; return; } }
    cout<<"is\n";
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
