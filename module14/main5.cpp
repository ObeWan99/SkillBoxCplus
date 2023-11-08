#include <iostream>

using namespace std;

void setArray(bool (*arr)[12], int rows){
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            arr[i][j] = true;
        }
    }
}

bool printArray(bool (*arr)[12], int rows){
    bool empty = true;
     for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            if(arr[i][j]){
                cout << "O" << '\t';
                empty = false;
            }
            else{
                cout << "X" << '\t';
            }
        }
        cout << endl;
    }
    return empty;
}


void burstBubbles(bool (*arr)[12], int rows, int startX, int startY, int endX, int endY){
    int startPointX;
    int startPointY;
    int endPointX;
    int endPointY;
    if (startX <= endX) {
        startPointX = startX;
        endPointX = endX;
    } else {
        startPointX = endX;
        endPointX = startX;
    }
    if (startY <= endY) {
        startPointY = startY;
        endPointY = endY;
    } else {
        startPointY = endY;
        endPointY = startY;
    }
    for (int i = startPointY; i <= endPointY; i++) {
        for (int j = startPointX; j <= endPointX; j++) {
            arr[i][j] = false;
            cout << "Pop!\n";
        }
    }

}


int main(){
    bool arr[12][12];
    setArray(arr, 12);
    int a, b, c, d;
    while(!printArray(arr, 12)) {
        cout << " Введите 1-ую координату региона: ";
        cin >> a >> b;
        cout << " Введите 2-ую координату региона: ";
        cin >> c >> d;
        if (a < 1 || a > 12 || b < 1 || b > 12
            || c < 1 || c > 12 || d < 1 || d > 12) {
            cout << "Invalid range!\n";
        }
        else {
            burstBubbles(arr, 12, --a, --b, --c, --d);
        }
    }   
}
