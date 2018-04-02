#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i=1;
    int case1=1;
    while(t--){
        int N;
        cin>>N;

        int high=0;
        int low=0;
        int i=1;
        int n;
        cin>>n;
        int p=n;
        i++;
        while(i<=N){
            cin>>n;
            if(n>p)high++;
            else if(n<p)low++;

            i++;
            p=n;
        }
        cout<<"Case "<<case1<<": "<<high<<" "<<low<<endl;
        case1++;

    }


    return 0;
}
