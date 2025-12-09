
#include <iostream>
#include<string>
using namespace std;
void count(string line){
 int num =0;
bool word=true;
for(int i=0;i<line.length();i++){
if((line[i] != '\t' || line[i] != ' ') && word==true){
num +=1;
word=false;
}
else if(line[i] ==' ' || line[i] == '\t'){
    word=true;
}

}
cout<<num;
}
int main() {
    string sent;
    cout<<"Type Text "<<endl;
    getline(cin,sent);
    count(sent);
}