#include <iostream>
using namespace std;
int wordCount(char *text,int *size){
    int count =0;
    bool inword =false;
    for(int i=0;text[i]!='\0';i++){
        if(text[i]==' '){
         inword=false;}
            else if(!inword){
      inword=true;
    count++;}}
    *size=count;
return 0;
}
int main()
{
char text[100];
int result;
cout<<"Enter a line ";
cin.getline(text,100);
wordCount(text,&result);
cout<<"word count: "<<result<<endl;
}