#include <iostream>
using namespace std;
void trans(int arr_1[4][3]){

    cout<<"Transpose of matrix is "<<endl;
    cout<<endl;
    for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    cout<<arr_1[j][i];
    cout<<"\t";}
    cout<<endl;}
    
}
int main() {
int mat[4][3]={{9,5,7},{1,3,6},{5,4,1},{0,8,2}};
cout<<"Matrix is "<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
     cout<<mat[i][j];
     cout<<"\t";
    }
   cout<<endl;
}
cout<<endl;
  trans(mat);
}