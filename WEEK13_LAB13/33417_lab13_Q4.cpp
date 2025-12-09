#include <iostream>
using namespace std;
bool palindom(string s1,int left , int right){
    if (left>=right)
return true;
if (s1[left]!=s1[right])
return false;
return palindom(s1,left+1,right-1);
}
int main() {
string s1 ;
cout<<"Enter ";
cin>>s1;
if (palindom(s1,0,s1.length()-1))
cout<<s1<<" is palindom";
else cout<<s1<<" is not palindom";
}