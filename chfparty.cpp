#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
int main()
{
    vector<unsigned long int> result;
    unsigned short int t=0;
    cin>>t;
    
    for (unsigned short int y=0; y<t; y++)
    {
        unsigned long int count =0;
        unsigned long int n;
        cin>>n;
        unsigned long int arr[n];
        
        for (unsigned long int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        
        if (arr[0]==0)
        {
            count++;
            for (unsigned long int r=1; r<n; r++)
            {
                if (count>=arr[r])
                {
                    count++;
                }
            }
            result.push_back(count);
        }
        else{
            result.push_back(0);
        }
    }
    
    for (unsigned int h=0; h<t; h++)
    {
        cout<<result[h]<<"\n";
    }
    
    return 0;
}*/
