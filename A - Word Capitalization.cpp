//This Problem Is very simple
//You have to Capitalize first letter of word
//You can access first letter with str[0] in c++
//Then use toupper to make it uppercase


#include<bits/stdc++.h>
using namespace std;
main(){

string str;
cin>>str;

if( islower(str[0]))
{
str[0]=toupper(str[0]);
}
cout<<str<<endl;
return 0;
}

