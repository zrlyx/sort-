//
//  main.cpp
//  new
//
//  Created by  20141105042hyb on 15/11/25.
//  Copyright (c) 2015年 20141105042HYB. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a[5],b[5],i=0;
    int *p=a;
    while(i<5)
    {
        cin>>*p++;
        i++;
    }
    for(p=&a[4],i=0;i<5;)
    {
        b[i]=*p;
        cout<<b[i]<<'\t'<<endl;
        p--;
        i++;
    }
        return 0;
}
