
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int w=80;
   int h=20;
   double min=0;
   double max=0;
   cout<<"Enter range (min and max value ) "<<endl;
   cout<<"Min value : ";
   cin>>min;
   cout<<"Max value : ";
   cin>>max;
   char space[h+1][w+1];
   for(int i=0;i <= h;i++){
   for(int j=0;j<=w;j++){
   space[i][j]=' ';
   }}
   int mid_r=h/2;
   int mid_c=w/2;
   
   for(int i=0;i<=w;i++){
   space[mid_r][i]='-';}
   
   for(int i=0;i<=h;i++){
   space[i][mid_c]='|';}
   
   for(int i=0;i<=w;i++){
   double x = min + i*(max-min)/w;
   double y=sin(x);
   
   int space_y=(int)((1.0-y)*h/2.0+0.5);
   if(space_y<0)space_y=0;
   if(space_y>h)space_y=h;
   
   if(space[space_y][i] == ' '){
   space[space_y][i]='*';}
   else{
   space[space_y][i]='*';}
   }
   for(int i=0;i<=h;i++){
   for(int j=0;j<=w;j++){
   cout<<space[i][j];}
   cout<<endl;}
   
   

   
   
}