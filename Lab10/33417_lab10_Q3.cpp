
#include <iostream>
using namespace std;
void sum(int arr_1[3][4],int arr_2[3][4]){
    int arr_3[3][4];
    for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     arr_3[i][j] = arr_1[i][j]+arr_2[i][j];
    }
    
    }
    cout<<"sum "<<endl;
    for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    cout<<arr_3[i][j];
    cout<<"\t";
     }
    cout<<endl; 
    }
    
}
int main()
{
 
 int a[3][4] = {{2,5,7,1}, {1,3,6,1}, {5,4,1,3}};
int b[3][4] = {{1,9,5,0}, {7,1,5,4}, {3,4,2,8}};
cout<<"fist matrix "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    cout<<a[i][j];
    cout<<"\t";
}
cout<<endl;
}
cout<<endl;
cout<<"second matrix "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    cout<<b[i][j];
    cout<<"\t";
}
cout<<endl;
}


 sum(a,b);
 
 
 
 
 
 
}