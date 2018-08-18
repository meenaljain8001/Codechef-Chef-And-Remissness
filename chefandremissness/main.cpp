#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int a,b,max,min;
        cin>>a>>b;
        if(a>b)
        min=a;
        else
        min=b;
        max=a+b;
        cout<<min<<" "<<max<<endl;

    }
    return 0;
}
