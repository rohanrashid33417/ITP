#include <iostream>
using namespace std;
int main(){
int rows, cols;
cout<<"Enter Rows:\t";
    cin>>rows;
   cout<<"Enter Columns:\t";
  cin>>cols;
    int arr[rows][cols];
cout<<"Enter Matrix Elements:\n";
    for (int i = 0; i < rows; i++){
  cout<<"Enter Row "<<i+1<<" Elemnts\n";
        for (int j = 0; j < cols; j++)
  {
     cin>>arr[i][j];
    }
    }
    int max = 0;
cout<<"Your Matrix Is:\n";
   for(int i = 0; i < rows; i++){
for (int j = 0; j < cols; j++)
{
cout<<arr[i][j]<<"\t";    
    }
 cout<<"\n";
    }
 for(int i = 0; i < rows; i++){
 for (int j = 0; j < cols; j++)
        {
if (max <= arr[i][j])
     {
  max = arr[i][j];
   }   
    }
    }
cout<<"The Maximum Number Is:\t"<<max;

}