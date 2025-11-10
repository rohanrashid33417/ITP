
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
 double x=3;
double b=0.0;
double w=0.0; 
double rate =0.001;  
double target=14;
 double y = w*x +b;
 double error = target - y;
 
 
 cout<<"step : 0  prediction :  "<<y<<" "<<"error :  "<<error<<endl;
    for(int i=1;i<=1000;i++){
        y = w*x +b;
    error = target - y;
     w=w+rate*error*x;
    b=b+rate*error;
      if(i%100==0){
     cout<<"step : "<<i<<"\t"<<"prediction : "<<y<<" "<<"error : "<<" "<<error<<endl;}}
   cout<<"Final prediction "<<w*x +b<<endl;
      cout<<"Target "<<target<<endl;
      cout<<"Final w= "<<w<<" b "<<b<<endl;
   
   
   cout<<"---------------Part b----------------"<<endl;
   int correct=0;
   double test,predict,actual;
   cout<<"Enter 10 input values ";
   for(int i=0;i<10;i++){
   cout<<"X["<<i+1<<"] =";
   cin>>test;
   predict=w*test+b;
   actual=2*test*test-4;
   bool iscorrect=fabs(predict-actual)<=1.0;
   if(iscorrect) correct++;
   
   
   cout<<"x "<<test<<" , prediction "<<predict<<" , true "<<actual<<" , "<<(iscorrect ? "correct" : "incorrect ")<<endl;}
   
   
   double(accuracy)=(correct/10.0)*100.0;
   cout<<"over all acuracy ="<<accuracy<<"%"<<endl;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
}