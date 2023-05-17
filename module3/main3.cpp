#include <iostream>
using namespace std;

int main()
{

// dailyGrowth — ежедневный рост;
// nightFade — размер съедаемого гусеницами бамбука за одну ночь;
// beginHeight — начальная высота бамбука.


    int beginHeight{100};
    int nightFade{20};
    int dailyGrowth{50};
  
    cout << beginHeight + (dailyGrowth*3) - (nightFade*2) << '\n';
   
    return 0;
}