//
//  mysara.cpp
//  codechef
//
//  Created by Tanishq Chamola on 22/03/20.
//  Copyright © 2020 Tanishq Chamola. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
//segmentaion error
// algo complete as per me
/*
int main()
{
    int t;
    cin>>t;
    
    while (t--) {
        
        int n,count=0;
        cin>>n;
        
        int b[n],arr[4];
        for (int i=0; i<n; i++) {
            cin>>b[i];
        }
        
        for (int i=0; i<n; i++) {
            arr[i]=0;
        }
        
        {
            int i=3,num = b[0];
            while (num!=0) {
                int rem = num%2;
                arr[i]=rem;
                num=num/2;
                i--;
            }
        }
        
        for (int y=1; y<n; y++) {
    //to first digit to binary format
            
            int cmp[4];
            int i=3,num = b[y];
            while (num!=0) {
                int rem = num%2;
                cmp[i]=rem;
                num=num/2;
                i--;
            }
            
            for (int i=0; i<4; i++) {
                if (arr[i] == 1) {
                    count++;
                }
                else if (arr[i] == 0)
                {
                    if (cmp[i]==0) {
                        arr[i]=0;
                    }
                    else if (cmp[1]==1) {
                        arr[i]=1;
                    }
                }
            }
            
            for (int l=0; l<4; l++) {
                arr[l]=cmp[l];
            }
        }
        cout<<int(pow(2,count)) % ( int(pow(10,9)) + 7)<<endl;
    }
    
    return 0;
}
*/
