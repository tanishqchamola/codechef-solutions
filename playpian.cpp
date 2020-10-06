#include <iostream>
#include <vector>
#include <cstring> //this is required when uploading on codechef to avoid compile time error of strlen was not declared in scope
using namespace std;
/*
int main()
{
    vector<char> result;
    int t;
    cin>>t;
    
    
    for (int i=0; i<t; i++)
    {
        char string[100];
        cin>>string;
        size_t len = strlen(string);

        for (int j=0; j<len; j=j+2)
        {
           if(string[j] == string[j+1])
           {
               result.push_back(0);
               goto label;
           }
        }
        result.push_back(1);
    label:;

    }
    for (int k=0; k<t; k++) {
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
}
*/
