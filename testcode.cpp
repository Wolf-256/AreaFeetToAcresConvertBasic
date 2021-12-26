#include <iostream>
#include <cmath>
using namespace std;

int main()
{

//variables 
const int unit = 43560;
float ImputAreaFeet;
float OutputNumberOfAcres;

string welcomeTexts[3] = {"WELCOME TO UNIT CONVERTER FEET TO ACRES", "PLEASE ESTIMATE TO THE NEAREST WHOLE NUMBER", "ENTER SIZE OF AREA IN FEET:"};

//text for user
for(int j=0;j<3;j++){
    cout  << welcomeTexts[j] << "\n";
}

//defines our number of sq ft units to calculate 
cin >> ImputAreaFeet;

//calculate
OutputNumberOfAcres=ImputAreaFeet/unit;

//cleans up output
round(OutputNumberOfAcres);

//output
cout << "The area of acres is about: " << OutputNumberOfAcres << " unit(s) . ";

return 0;

}
