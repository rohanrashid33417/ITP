#include <iostream>
using namespace std;

int main() {
   int total_plots = 8;
   float plot_length[total_plots] = {150.6, 354, 172.23, 73.33, 415.15, 415.15, 415.15, 415.15};
    float plot_width[total_plots]  = {126.9, 451.51, 75.65, 707.17, 116.17, 116.17, 116.17, 116.17};
    float largest_area = 0;
   int largest_plot_number = 0;
   for (int i = 0; i < total_plots; i++) {
    float current_area = plot_length[i] * plot_width[i];
        if (current_area > largest_area) {
largest_area = current_area;
largest_plot_number = i + 1;
        }
    }
  cout << "The largest plot is Plot " << largest_plot_number << " with an area of " << largest_area << " square units." << "\n";
}