#include <iostream>
#include <vector>
#include <math.h>
#include <stack>
#include <queue>
using namespace std;
/*
int main()
{
    cout<<"sdfsdfsdfs";
    queue<int> output;
    stack <int> result;
    int t;
    cin>>t;
    
    for (int i=0; i<t; i++)
    {
        queue<int> empty;
        queue<int> fora;
        queue<int> forb;
        int a,b,itr;
        int count1=0;
        int count2 = 0;
        int max =0;
        cin>>a>>b;
        
        while(a!=0)
        {
            int rem = a%10;
            a=a/10;
            fora.push(rem);
            count1++;
        }
        
        while(b!=0)
        {
            int rem = b%10;
            b=b/10;
            forb.push(rem);
            count2++;
        }
        
        if (count1>count2)
        {
            max=count1;
            itr = count2;
            
            while(itr!=0)
            {
                int num1=0, num2=0, sum=0;
                int ans=0;
                num1 = fora.front();
                fora.pop();
                num2 = forb.front();
                forb.pop();
                
                sum = num1 + num2;
                ans = sum%10;
                result.push(ans);
                itr--;
            }
            
            while(!fora.empty())
            {
                result.push(fora.front());
                fora.pop();
            }
            
            int total = 0;
            for (int q=max-1; q>=0; q--)
            {
                total = total + (result.top() * pow(10,q));
                result.pop();
            }
            output.push(total);
            
        }
        
        else if(count1<count2)
        {
            max = count2;
            itr = count1;
            
            while(itr!=0)
            {
                int num1=0, num2=0, sum=0;
                int ans=0;
                num1 = fora.front();
                fora.pop();
                num2 = forb.front();
                forb.pop();
                
                sum = num1 + num2;
                ans = sum%10;
                result.push(ans);
                itr--;
            }
            
            while(!forb.empty())
            {
                result.push(forb.front());
                forb.pop();
            }
            
            int total = 0;
            for (int q=max-1; q>=0; q--)
            {
                total = total + (result.top() * pow(10,q));
                result.pop();
            }
            output.push(total);
        }
        
        else
        {
            itr = count1;
            max = count1;
            while(itr!=0)
            {
                int num1=0, num2=0, sum=0;
                int ans=0;
                num1 = fora.front();
                fora.pop();
                num2 = forb.front();
                forb.pop();
                
                sum = num1 + num2;
                ans = sum%10;
                result.push(ans);
                itr--;
            }
            
            int total = 0;
            for (int q=max-1; q>=0; q--)
            {
                total = total + (result.top() * pow(10,q));
                result.pop();
            }
            output.push(total);
        }
    }
    
    while (!output.empty())
    {
        cout<<output.front()<<"\n";
        output.pop();
    }
    return 0;
}*/
