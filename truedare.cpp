#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> result;
    int t;
    cin>>t;
    
    for(int l=0;l<t;l++)
    {
        bool truth = false;
        bool dare = false;
        //tr    dr  ts  ds
        
        int n_tr;
        cin>>n_tr;
        int tr[n_tr];
        for(int i=0;i<n_tr;i++)
        {
            cin>>tr[i];
        }
        
        int n_dr;
        cin>>n_dr;
        int dr[n_dr];
        for(int i=0;i<n_dr;i++)
        {
            cin>>dr[i];
        }
        
        int n_ts;
        cin>>n_ts;
        int ts[n_ts];
        for(int i=0;i<n_ts;i++)
        {
            cin>>ts[i];
        }
        
        int n_ds;
        cin>>n_ds;
        int ds[n_ds];
        for(int i=0;i<n_ds;i++)
        {
            cin>>ds[i];
        }
        
        //checking subset for truth case
        
        {   int count=0;
            for(int i=0;i<n_ts;i++)
            {
                bool check = false;
                for (int j=0; j<n_tr; j++)
                {
                    if (ts[i] == tr[j])
                    {
                        check = true;
                    }
                }
                if (check == true)
                {
                    count++;
                }
            }
            if (count == n_ts)
            {
                truth = true;
            }
        }
        
        //checking subset for dare case
        {
           int count=0;
            for(int i=0;i<n_ds;i++)
            {
                bool check = false;
                for (int j=0; j<n_dr; j++)
                {
                    if (ds[i] == dr[j])
                    {
                        check = true;
                    }
                }
                if (check == true)
                {
                    count++;
                }
            }
            if (count == n_ds)
            {
                dare = true;
            }
        }

        if(truth == true && dare == true)
        {
            result.push_back(1);
        }
        else
        {
            result.push_back(0);
        }
    
    }
    //outside test case wala scope
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
