#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%2==0)a++;
        int sum=0;
        while(a<=b){
            sum+=a;
            a=a+2;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        i++;

    }


    return 0;
}
