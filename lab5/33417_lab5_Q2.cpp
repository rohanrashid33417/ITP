#include <iostream>
using namespace std;
int main(){
    int a;
    int total=0;
      while(true){
        cout<< "enter an number: ";
        cin>>a;
        if (a < 0){
            cout<< "number of time message is displayed: "<< total <<endl; 
            break;
        } 
    for(int i=0 ;i<a ; i++ ){
        cout<<"CSE141 exam is in week 09"<<endl;
        total++;
    }
    cout<<"number of time message displayed :"<< total <<endl;
  
    }
}
