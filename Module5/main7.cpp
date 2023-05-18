#include <iostream>
using namespace std;

int main(){
    unsigned int nominals[] = {5000, 2000, 1000, 500, 200, 100};
    unsigned int requested;
    cin >> requested; 
    cout << "Запрошенная сумма: " << requested << '\n';
    if (requested % 100 != 0) {
        cout << "Банкомат не сможет выдать сумму, не кратную ста\n";
    } else if (requested > 150000) {
        cout << "Введена сумма больше 150000 рублей\n";
    } else {
        for (auto nominal : nominals) {
            cout << " - " << nominal << " x " << (requested / nominal) << '\n';
            requested %= nominal;
        }
    }
 
    return 0;
}