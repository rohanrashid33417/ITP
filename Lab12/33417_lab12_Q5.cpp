#include <iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

void displayboard(int deck[4][4],bool revel[4][4]){
    cout<<"Board state;";
    for(int i=0;i<4;i++){
    for(int j=0;j<4;j++) {
     if(revel[i][j])   
     cout<<deck[i][j];
     else
     cout<<"*";
    } 
    cout<<"\n";}}
    
void play(int deck[4][4],bool revel[4][4],int found){
    if(found==8){
     cout<<"cong! All pairs matched"   ;
     return;}
 displayboard(deck,revel);
  int r1,c1,r2,c2;   
     cout<<"select first card (row col 0-3): ";
     cin>>r1>>c1;
     cout<<"select second card (row col 0-3): ";
     cin>>r2>>c2;
     if(r1<0||r1>3||c1<0||c1>3||r2<0||r2>3||c2<0||c2>3||
     (r1==r2&&c1==c2)||
     revel[r1][c1]||revel[r2][c2]){
     cout<<"Invalid choice.";
     play(deck,revel,found);
     return;}
     
     cout<<"you flipped; "<<deck[r1][c1]<<"and"<<deck[r2][c2]<<"\n";
     if(deck[r1][c1]== deck[r2][c2]){
     cout<<"pair match!\n";
     revel[r1][c1]=revel[r2][c2]=true;
     found++;}
     else {
     cout<<"no match.\n";}
     play(deck,revel,found);}



int main() {
srand(time(0));
vector<int>cardspool;
for(int i=1;i<=8;i++){
    cardspool.push_back(i);
    cardspool.push_back(i);}
random_shuffle(cardspool.begin(), cardspool.end());

int deck[4][4];
int k =0;
for(int i=0;i<4;i++){
   for(int j=0;j<4;j++) {
       deck[i][j]=cardspool[k++];}}
   bool revel[4][4]={{false}};
cout<<"welcome\n ";
play(deck,revel,0);
return 0;
}