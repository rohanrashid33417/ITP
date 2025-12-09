
#include <iostream>
using namespace std;
void magic(int arr[3][3]){ 
    int R=0,C=0,D1=0,D2=0;
    int sum=0;
    bool magic=true;
    for(int i=0;i<3;i++){
     sum +=arr[0][i];}
     for(int i =0;i<3;i++){
      R=0;   
   for(int j=0;j<3;j++){
     R+=arr[i][j] ;}  
   if(R!=sum)
   magic=false;}
   
    for(int i =0;i<3;i++){
        C=0;
   for(int j=0;j<3;j++){
     C+=arr[j][i] ;}  
   if(C!=sum)
   magic=false;}
   
   for(int i=0;i<3;i++){
   D1+=arr[i][i];
   D2+=arr[i][2-i];}
   if(D1!=sum || D2!=sum)
   magic = false;
   if(magic){
       cout<<"true";}
   else{
       cout<<"false";
   }
   
}
int main() {
  int mat[3][3]={{2,7,6},{9,5,1},{4,3,8}};
  cout<<"Matrix is "<<endl;
for(int i =0;i<3;i++){
  for(int j=0;j<3;j++) {
    cout<<mat[i][j];
    cout<<" ";
  } 
  cout<<endl;}
  
  magic(mat);
  
}