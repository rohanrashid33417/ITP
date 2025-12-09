#include <iostream>
using namespace std;
bool sub(string s1,string s2,int i=0, int j=0){
    if(i==s1.length())
    return true;
    if(j==s2.length())
    return false;
    if (s1[i]==s2[j])
    return sub(s1,s2,i+1,j+1);
    return sub(s1,s2,i,j+1);
}
int main() {
string s1 ,s2;
cout<<"Enter first string: ";
cin>>s1;
cout<<"Enter second string: ";
cin>>s2;
if (sub(s1,s2))
cout<<s1<<" subsequence of "<<s2<<endl;
else cout<<s1<<" is not subsequence of "<<s2<<endl;
}har