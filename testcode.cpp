#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//variables 
const int unit = 43560;
float ImputAreaFeet;
float OutputNumberOfAcres;
string welcomeTexts[3] = {"WELCOME TO UNIT CONVERTER FEET TO ACRES", "PLEASE ESTIMATE TO THE NEAREST WHOLE NUMBER", "ENTER SIZE OF AREA IN FEET:"};//text for user
for(int j=0;j<3;j++)
{
cout  << welcomeTexts[j] << "\n";
}
cin >> ImputAreaFeet;//defines our number of sq ft units to calculate 
OutputNumberOfAcres=ImputAreaFeet/unit;//calculate
round(OutputNumberOfAcres);//cleans up output
cout << "The area of acres is about: " << OutputNumberOfAcres << " unit(s) . ";//output
return 0;
}
