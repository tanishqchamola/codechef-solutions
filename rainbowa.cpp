#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    vector <int> result;
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++)
    {
        bool rainbow = true;
        int n;
        cin>>n;
        int arr[n];
        int a=0;
        int b=n-1;
        
        for (int j=0; j<n; j++)
        {
            cin>>arr[j];
            if(arr[j]>7)
            {
                rainbow = false;
            }
        }
        for (int y=1; y<8; y++)
        {
            for(int e=0;e<n;e++)
            {
                if(y==arr[e])
                {
                    break;
                }
                if(e == (n-1))
                {
                    rainbow = false;
                }
            }
        }
        
        if(rainbow == false)
        {
            goto label;
        }
        
        for (int k=0; k<((n/2)+1); k++)
        {
            if(arr[a] != arr[b])
            {
                rainbow = false;
                goto label;
            }
            a++;
            b--;
        }
        label:;
        
        if (rainbow == false)
        {
            result.push_back(0);
        }
        else
        {
            result.push_back(1);
        }
    }
    
    for (int k=0;k<t;k++)
    {
        if(result[k] == 1)
        {
            cout<<"yes"<<"\n";
        }
        else
        {
            cout<<"no"<<"\n";
        }
    }
    return 0;
}*/
