#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter Number Of Rows:\t";
cin>>rows;
    cout<<"Enter Number Of Columns:\t";
  cin>>cols;
    int arr[rows][cols];
int arr_2[rows][cols];
    bool Is_Symmetric = true;

for (int i = 0; i < rows ;i++)
    {
 cout<<"Enter Row "<<i+1<<" Elements:\n";
for (int j = 0; j < cols; j++)
        {
    cin>>arr[i][j];
   }
    }
cout<<"Matrix Before Transpose:\n";
    for (int i = 0; i < rows ;i++)
    {
for (int j = 0; j < cols; j++)
        {
 cout<<arr[i][j]<<"\t";
    arr_2[i][j] = arr[j][i];
        }
cout<<"\n";
    }
   cout<<"Matrix After Transpose:\n";
for (int i = 0; i < rows; i++)
    {
for (int j = 0; j < cols; j++)
   {
     cout<<arr_2[i][j]<<"\t";
}   
cout<<"\n";
    }

for (int i = 0; i < rows; i++)
    {
for (int j = 0; j < cols; j++)
    {
if (arr[i][j]!=arr_2[i][j])
  {
Is_Symmetric = false;
    break;
 }
else{
     Is_Symmetric = true;
 }
      }  
    }
    if(Is_Symmetric){
 cout<<"The Matrix Is Symmetric!";
    }
    else{
cout<<"The Matrix Is Asymmetric!";
    }
    
    
   
}