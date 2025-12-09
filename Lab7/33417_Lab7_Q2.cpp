#include<iostream>
using namespace std;
int main(){
    int rows, cols;
    int num_of_zeros = 0;
   cout<<"Enter Number Of Rows:\t";
    cin>>rows;
    cout<<"Enter Number Of Columns:\t";
    cin>>cols;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
   cout<<"Enter Row "<<i+1<<" Elements:\n";
  for (int j = 0; j < cols; j++)
        {
    cin>>arr[i][j];
        }
        cout<<"\n";
    }

    for (int i = 0; i < rows; i++)
    {
   for (int j = 0; j < cols; j++)
        {
    if (arr[i][j] == 0){
                num_of_zeros += 1;
       }
        }  
    }
    if(num_of_zeros >= ((rows*cols)/2)){
     cout<<"The Matrix Is Sparse\n";
    }
    else{
    cout<<"The Matrix Is Not Sparse One\n";
    }

}