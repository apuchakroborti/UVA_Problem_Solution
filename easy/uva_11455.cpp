#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c>d && a+b+d>c && a+d+c>b && d+b+c>a)
        {
            if(a==b && b==c && c==d)
            {
                printf("square\n");
            }
            else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c))
            {
                printf("rectangle\n");
            }
            else
            {
                printf("quadrangle\n");
            }
        }
        else
        {
            printf("banana\n");
        }

    }

    return 0;
}
