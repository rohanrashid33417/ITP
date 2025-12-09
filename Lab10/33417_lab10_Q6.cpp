#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
void ran(int a){
    double sum=0;
    int b[a]={0};
    double mean=0;
    double variance=0;
 srand(time(0));   
    for(int i=0;i<a;i++){
        
        b[i]=rand() % 100 + 1;
        cout<<b[i]<<"\t";
        
        
        sum+=b[i];
         }
      cout<<endl;
      mean=sum/a;
     cout<<"Mean : "<<mean<<endl;
     
     for(int i=0;i<a;i++){
      variance+= pow(b[i]-(mean),2)  ; 
     }
    variance = variance /a;
    double standard_deviation = sqrt(variance);
    cout<<"standard_deviation : "<<standard_deviation;
}
int main() {
    
 int a=0;   
cout<< "How many numbers you want to generate : ";
cin>>a;
 ran(a);

}