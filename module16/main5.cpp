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

void parseData(string& str){
    stringstream buffer_str(str);
    int temperature_inside, temperature_outside;
    string movement, lights;
    buffer_str >> temperature_inside >> temperature_outside >> movement >> lights ;

    // Логика умного дома
    if (temperature_outside < 0) {
        // Включить систему обогрева водопровода
        std::cout << "Water pipe heating ON!" << std::endl;
    } else if (temperature_outside > 5) {
        // Выключить систему обогрева водопровода
        std::cout << "Water pipe heating OFF!" << std::endl;
    }

    if (lights == "on" && movement == "yes" ) {
        // Включить садовое освещение
        std::cout << "Garden lights ON!" << std::endl;
    } else {
        // Выключить садовое освещение
        std::cout << "Garden lights OFF!" << std::endl;
    }

}


int main(){
    for(int i = 0; i < 48; i++){
        string str;
        getline(cin, str);
        parseData(str);
    }

}
