#include <iostream>
using namespace std;
int *merg(int *a,int A,int *b,int B){
 int *merged =  new int [A+B] ;
    int *p=merged;
    int *x=a;
    for(int i=0;i<A;i++){
      *p=*x;
      p++;
      x++;
    }
    int *y=b;
    for(int i=0;i<B;i++){
     *p=*y;
     p++;
     y++;}
        
    return merged;
}
int main() {
  int A,B;
  cout<<"Enter size of  first array: ";
  cin>>A;
  int *a= new int [A];
  int *pa =a;
  cout<<"Enter  first array: ";
  for(int i=0;i<A;i++){
    cin>>*pa;
    pa++;}
     cout<<"Enter size of second array: ";
     cin>>B; 
  int *b= new int [B];
  int *pb=b;
  cout<<"Enter second array: ";
  for(int i=0;i<B;i++){
    cin>>*pb;
    pb++;}
  int *merged = merg(a,A,b,B);
  int *pm=merged;
  for(int i=0;i<A+B;i++){
      cout<<*pm<<" ";
      pm++;}
  delete[]a;
  delete[]b;
  delete[]merged;
}