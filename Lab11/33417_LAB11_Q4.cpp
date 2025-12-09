
#include <iostream>
using namespace std;

void job(){
double mark,experience;
cout<<"Enter Marks: ";
cin>>mark;
cout<<"Enter Experience: ";
cin>>experience;
if(mark<=50&& experience<=1){
cout<<"Trainee Engineer"<<endl;}
if( mark>50 && experience<1){
cout<<"Trainee Engineer"<<endl;}
if(mark<=50 && experience>1){
cout<<"Trainee Engineer"<<endl;}


if((mark>=60&&mark<70) && experience>=1){
cout<<"Assistant Developer";}
if((mark>=60&&mark<70) && experience<2){
cout<<"Assistant Developer";}

if(mark>=70 && experience >=2){
cout<<" Associate Developer";}

if(mark>=70 &&experience<2){
cout<<"Assistant Developer";}
}
int main(){
 job();
      
}