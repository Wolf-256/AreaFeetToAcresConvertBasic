#include <iostream>
using namespace std;

int main(){
int unit = 43560;
float ImputAreaFeet;
float OutputNumberOfAcres;

cout << " WELCOME TO UNIT CONVERTER FEET TO ACRES " << endl;
cout << " PLEASE ESTIMATE TO THE NEAREST WHOLE NUMBER " << endl;
cout << " ENTER SIZE OF AREA IN FEET: ";
cin >> ImputAreaFeet;

OutputNumberOfAcres=ImputAreaFeet/unit;

cout << "Number of Acres is about: " << OutputNumberOfAcres << " units.";

return 0;
}
