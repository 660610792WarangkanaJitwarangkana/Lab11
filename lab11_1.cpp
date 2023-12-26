#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string grade[] = {"A", "B", "B+", "C", "C+", "D", "D+", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0; i<3; i++){
        cin.get();
    }
    int g=rand()%9;
    srand(time(0));
    cout << "You will get " << grade[g] << " in this 261102.";
}