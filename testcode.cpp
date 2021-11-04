#include <iostream>
#include <cmath>
using namespace std;

int main(){
//variables 
int unit = 43560;
float ImputAreaFeet;
float OutputNumberOfAcres;

//text for user
cout << " WELCOME TO UNIT CONVERTER FEET TO ACRES " << endl;
cout << " PLEASE ESTIMATE TO THE NEAREST WHOLE NUMBER " << endl;
cout << " ENTER SIZE OF AREA IN FEET: ";

//defines our number of sq ft units to calculate 
cin >> ImputAreaFeet;

//calculate
OutputNumberOfAcres=ImputAreaFeet/unit;

//cleans up output
round(OutputNumberOfAcres);

//output
cout << "Number of Acres is about: " << OutputNumberOfAcres << " units.";

return 0;
}
