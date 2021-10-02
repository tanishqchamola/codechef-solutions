//
//  strno.cpp
//  codechef
//
//  Created by Tanishq Chamola on 08/04/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

struct ds {
    long long a;
    long long x=0;
    long long k=-1;
};

bool checkPrime(long long x) {
    if (x==2 || x==3 || x==5 || x==7) {
        return true;
        
    }
    else if ( (x%2!=0) && (x%3!=0) && (x%5!=0) && (x%7!=0) ) {
        return true;
    }
    else {
        return false;
    }
}
/*
int main()
{
    long long t;
    cin>>t;
    
    long long n=100000;
    ds arr[n];
    
    for (long long i=2; i<n; i++) {
        arr[i].a=i;
        for (long long j=1; j<=sqrt(i); j++) {

            if (i%j==0) {
                
                if (i/j == j) {
                    arr[i].x++;
                    if (checkPrime(j)) {
                        arr[i].k++;
                    }
                }
                else {
                    arr[i].x=arr[i].x+2;
                    if (checkPrime(i/j)) {
                        arr[i].k++;
                    }
                    if (checkPrime(j)) {
                        arr[i].k++;
                    }
                }
                
            }
        }
//        arr[i].x=arr[i].x-2;
//        arr[i].k=arr[i].k-1;
        
        //cout<<arr[i].a<<" "<<arr[i].x<<" "<<arr[i].k<<endl;
    }
    
    
    while (t--) {
        long long d,pd;
        cin>>d>>pd;
        
        for (long long i=2; i<n; i++) {
            if ((arr[i].x==d) && (arr[i].k==pd)) {
                //cout<<i;
                cout<<"1\n";
                goto label;
            }
        }
        cout<<"0\n";
    label: ;
        
    }
    
    
    return 0;
}
*/
