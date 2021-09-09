//https://codeforces.com/contest/467/problem/A

#include<bits/stdc++.h>
using namespace std;
main(){



int r;

int mem,cap;
int c=0;
cin>>r;
while(r--)
{


    cin>>mem>>cap;
    if(cap-mem>=2)
    {

        c++;
    }

}
cout<<c<<endl;


return 0;
}

