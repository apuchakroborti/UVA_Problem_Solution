#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //scanf(" ");
    int i=1;
    while(t--){
        int a,b;
        cin>>a>>b;
        double in_F=32.0+(9.0 * a)/5.0;
        in_F+=b;
        double C=(5.0*(in_F-32.0)/9.0);

        printf("Case %d: %.2lf\n",i,C);
        i++;

    }
    return 0;
}
