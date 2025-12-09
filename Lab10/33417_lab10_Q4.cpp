
#include <iostream>
using namespace std;

void col(int a,int arr[3][3]){
   int sum = 0;
   a = a-1;
   if(a==0){
   for(int i=0;i<3;i++){
       sum += arr[i][a];
        }
  }
  else if(a==1){
  for(int i=0;i<3;i++){
       sum += arr[i][a];}
  }
  else if(a==2){
  for(int i=0;i<3;i++){
       sum += arr[i][a];}
  }  
    
cout<<"sum "<<sum;}

int main(){
int mat[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
int a=0;
cout<<"Matrix is "<<endl;
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
 cout<<mat[i][j];
 cout<<"\t";}
 cout<<endl;}
 cout<<"enter column number ";
 cin>>a;
 col(a,mat);
 
}