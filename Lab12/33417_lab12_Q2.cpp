#include <iostream>
#include<string>
using namespace std;
bool palin(string s,int start,int end){
    if(s[start]==s[end]) return true;
    
    
   if(s[start!=s[end]]) return false;
   return (s,start+1,end-1);
 
}
int main() {
string s;
cout<<"Enter word: ";
cin>>s;
if (palin(s,0,s.size()-1)){
    cout<<"It is palindom";}
    
else cout<<"It is not palindom";



}