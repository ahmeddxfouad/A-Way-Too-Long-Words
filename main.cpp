#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int y,n;
    char x[200];
    cin>>x;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        y=strlen(x);
        if (y>10)
    {
        cout<<x[0]<<(y-2)<<x[y-1];
    }
     else
    cout<<x;
    }
//    y=strlen(x);
//    if (y>10)
//    {
//        cout<<x[0]<<(y-2)<<x[y-1];
//    }
//    else
//    cout<<x;
    return 0;
}
