#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int gKalvin{5000};
enum switches 
{ 
    POWER_HOUSE = 1,
    ROZETKI_HOUSE =2,
    LIGHTS_INSIDE = 4, 
    LIGHTS_OUTSIDE = 8, 
    OTOPLENIE_INSIDE = 16, 
    OTOPLENIE_TRUB = 32, 
    CONDITIONER = 64 
};

void parseData(string& str, int& hours, int& curr_switches_state){
    stringstream buffer_str(str);
    int temperature_inside, temperature_outside;
    string movement, lights;
    buffer_str >> temperature_inside >> temperature_outside >> movement >> lights ;

   
    if(temperature_outside < 0 && !(curr_switches_state & OTOPLENIE_TRUB)) {
        cout << "Нагрев труб включен " << endl;
        curr_switches_state |= OTOPLENIE_TRUB;
    }
    else if(temperature_outside > 5 && (curr_switches_state & OTOPLENIE_TRUB)) {
        cout << "Нагрев труб выключен " << endl;
        curr_switches_state ^= OTOPLENIE_TRUB;  
    }

    if(hours > 16 && hours < 5 && movement == "yes" && !(curr_switches_state & LIGHTS_OUTSIDE)) {
        cout << "Садовое освещение включено!" << endl;
        curr_switches_state |= LIGHTS_OUTSIDE;
    } 
    else if(curr_switches_state & LIGHTS_OUTSIDE){
        cout << "Садовое освещение выключено!" << std::endl;
        curr_switches_state ^= LIGHTS_OUTSIDE;
    }

    if(temperature_inside < 22 && !(curr_switches_state & OTOPLENIE_INSIDE)){
        cout << "Отопление внутри включено!" << endl;
        curr_switches_state |= OTOPLENIE_INSIDE;
    }
    else if(temperature_inside >= 25 && curr_switches_state & OTOPLENIE_INSIDE){
        cout << "Отопление внутри выключено!" << endl;
        curr_switches_state ^= OTOPLENIE_INSIDE;
    }

    if(temperature_inside >= 30 && !(curr_switches_state & CONDITIONER)){
        cout << "Кондер включен!" << endl;
        curr_switches_state |= CONDITIONER;
    }
    else if(temperature_inside <= 25 && curr_switches_state & CONDITIONER){
        cout << "Кондер выключен!" << endl;
        curr_switches_state ^= CONDITIONER;
    }

    if(hours >= 16 && hours <= 20 && lights == "on"){
        gKalvin -= 300;
        cout << "Color temperature:" << gKalvin << "K" << endl;
    }
    else if(hours == 0 && lights == "on"){
        cout << "Lights ON!" << endl; 
        cout << "Color temperature:" << gKalvin << "K" << endl;
        gKalvin = 5000;
    }
    else{
        cout << "Color temperature:" << gKalvin << "K" << endl;
    }
}


int main(){
    for(int days = 0; days < 2; days++){
        for(int hours = 0; hours <= 23; hours++){
            int curr_switches_state{1};
            string str;
            cout << "Temperature inside, temperature outside, movement, lights: \n"; 
            getline(cin, str);
            parseData(str, hours, curr_switches_state);
        }
    }
}
