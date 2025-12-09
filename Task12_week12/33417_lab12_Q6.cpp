
#include <iostream>
using namespace std;
void rep(char *txt, char old,char nw){
   char *p=txt;
   while (*p!='\0'){
    if (*p ==old)
    *p=nw;
    p++;}}
    
    int main() {
char txt[100];
cout<<"Enter text;";
cin>>txt;
char old,nw;
cout<<"Enter old character;";
cin>>old;
cout<<"Enter new character;";
cin>>nw;
rep(txt,old,nw);
cout<<txt;
}