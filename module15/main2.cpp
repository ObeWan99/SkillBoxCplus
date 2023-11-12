#include <iostream>
#include <vector> 

using namespace std;

int main(){
    vector<int> a = {2, 7, 11, 15};
    int res = 9;

for(int i = 0; i < a.size(); i++)
{
    if(a[i] + a[i+1] == res){
        cout << a[i] << " " << a[i+1];
        break;
    }
}

}