#include <iostream>
using namespace std;

int main() {
    double start_amp, end_amp;
    int num_swings = 0;
    
    cout << "Введите начальную амплитуду колебания в сантиметрах: ";
    cin >> start_amp;
    cout << "Введите конечную амплитуду колебаний, которая считается остановкой маятника: ";
    cin >> end_amp;
    
    while (start_amp > end_amp) {
        start_amp *= 0.916;
        num_swings++;
    }
    
    cout << "Маятник совершит " << num_swings << " колебаний, прежде чем остановиться." << endl;
    
    return 0;
}