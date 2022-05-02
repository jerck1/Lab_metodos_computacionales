#include <iostream>
#include <fstream>

using namespace std;
void read(double)

int main(){
  ofstream myfile;
  myfile.open ("text.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
