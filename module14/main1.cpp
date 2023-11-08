#include<iostream>
using namespace std;

int main()
{
const int NUM_ROWS = 2;
const int NUM_COLS = 6;

int utensils[NUM_ROWS][NUM_COLS] = { //посуда
    {3, 3, 3, 3, 3, 4}, // first row
    {3, 3, 3, 3, 3, 4}  // second row
};

int dishes[NUM_ROWS][NUM_COLS] = { // тарелки
    {2, 2, 2, 2, 2, 3}, // first row
    {2, 2, 2, 2, 2, 3}  // second row
};

int chairs[NUM_ROWS][NUM_COLS] = { //стулья
    {1, 1, 1, 1, 1, 1}, // first row
    {1, 1, 1, 1, 1, 1}  // second row
};

chairs[0][4] += 1;
utensils[1][2] -= 1;
utensils[0][5] -= 1;
utensils[1][2] += 1;
dishes[0][5] -= 1;

cout << "utensils: "<< '\n';
for(int i = 0; i < NUM_ROWS; i++)
{
    for(int j = 0; j < NUM_COLS; j++)
    {
        cout << utensils[i][j] << " ";
    }
    cout << endl;
}

cout << "dishes: "<< '\n';
for(int i = 0; i < NUM_ROWS; i++)
{
    for(int j = 0; j < NUM_COLS; j++)
    {
        cout << dishes[i][j] << " ";
    }
    cout << endl;
}

cout << "chairs: "<< '\n';
for(int i = 0; i < NUM_ROWS; i++)
{
    for(int j = 0; j < NUM_COLS; j++)
    {
        cout << chairs[i][j] << " ";
    }
    cout << endl;
}

}