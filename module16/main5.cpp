#include <iostream>
#include <string>
#include <sstream>
using namespace std;

enum switches 
{ 
    LIGHTS_INSIDE = 1, 
    LIGHTS_OUTSIDE = 2, 
    HEATERS = 4, 
    WATER_PIPE_HEATING = 8, 
    CONDITIONER = 16 
};

int main(){
    string str;
    getline(cin, str);
    stringstream buffer_str(str);

}