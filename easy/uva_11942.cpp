#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    scanf(" ");
    printf("Lumberjacks:\n");
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        int arr[30];
        int j=0;
        while(ss>>arr[j])j++;
        int res1=1,res2=1;
        for(int i=0;i<j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                res1=0;
                break;
            }
        }
        for(int i=0;i<j-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                res2=0;
                break;
            }
        }
        if(res1 || res2)printf("Ordered\n");
        else printf("Unordered\n");

    }
    return 0;
}
