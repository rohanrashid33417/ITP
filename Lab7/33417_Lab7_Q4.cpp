#include<iostream>
using namespace std;
int main(){
    int n = 5;
double std1_marks[n] = {60, 75, 85, 95, 49};
  double std2_marks[n] = {59, 70, 65, 45, 39};
  double mean_1 = 0;
double mean_2  = 0;
    double covariance;
    for (int i = 0; i < n; i++)
    {
 mean_1 += std1_marks[i];
 mean_2 += std2_marks[i];
    }
  mean_1 /= 5;
    mean_2 /= 5;
for (int i = 0; i < n; i++)
   {
covariance += (std1_marks[i]-mean_1) * (std2_marks[i]-mean_2);
    }
   covariance /= (n-1);
if (covariance > 0)
    {
 cout<<"Positive Relationship!";
    }
else if (covariance < 0)
    {
cout<<"Negative Relationship";
    }
}