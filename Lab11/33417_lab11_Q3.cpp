
#include <iostream>
#include <string>
using namespace std;

void compare(string s1,string s2){
int size1=s1.size();
int size2=s2.size();
if(size1>size2){

cout<<s1;}
else if(size1==size2){
    cout<<"String are equal";}
else {
    cout<<s2;}

}
int main()
{
    string s1,s2;
   
  cout<<"Enter First string : ";
  cin>>s1;
  
  cout<<"Enter second string : ";
  cin>>s2;
  
  compare(s1,s2);
      
}