#include <iostream>

using namespace std;

bool isPRime(int n)
{
    if (n==1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    for (int i=5;i*i<n;i=i+6)
    {
        if (n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin>>n;
    bool res=isPRime(n);
    if (res==1)
    cout<<"Prime number";
    else cout<<"Not a Prime Number";
    return 0;
}
