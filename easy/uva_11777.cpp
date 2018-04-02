#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("uva_11777_in.txt","r",stdin);
    int t;
    cin>>t;
    int Case=1;
    while(t--)
    {
        int n=7;
        int sum=0;
        int arr[7];
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
            if(i<4)sum+=arr[i];
        }
        //sort(arr+5,arr+7);
        int a=-1,b=-1;
        for(int i=4;i<7;i++)
        {
            if(arr[i]>a || a==-1)
            {
                b=a;
                a=arr[i];
            }
            else if(arr[i]>b || b==-1)
            {
                b=arr[i];
            }

        }

        //cout<<a<<" "<<b<<endl;
        sum=sum+(a+b)/2;

        if(sum>=90)printf("Case %d: A\n",Case++);
        else if(sum>=80)printf("Case %d: B\n",Case++);
        else if(sum>=70)printf("Case %d: C\n",Case++);
        else if(sum>=60)printf("Case %d: D\n",Case++);
        else printf("Case %d: F\n",Case++);

    }

    return 0;
}
