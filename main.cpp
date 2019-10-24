#include <iostream>
#include "Tasks.h"

using namespace std;

int main() {
    cout << "Number for the first task: " << endl;
    unsigned int numb;
    cin >> numb;
    int first_result = FirstTask(numb);
    cout << first_result << endl;

    cout << "Number for the second task: "<< endl;
    cin >> numb;
    unsigned int second_result = SecondTask(numb);
    cout << second_result << endl;

    cout << "Number for the third task: "<< endl;
    cin >> numb;
    int third_result = ThirdTask(numb);
    cout << third_result << endl;

    cout << "Number for the fourth task: "<< endl;
    cin >> numb;
    int fourth_result = FourthTask(numb);
    cout << fourth_result << endl;

    cout << "Numbers for the fifth task: "<< endl;
    cin >> numb;
    int i;
    cin >> i;
    int fifth_result = FifthTask(numb, i);
    if  (fifth_result == -1) {
        cout << "i should be less than 16 and greater than -1" << endl;
    } else {
        cout << fifth_result << endl;
    }

    cout << "Numbers for the sixth task: "<< endl;
    cin >> numb;
    cin >> i;
    int sixth_result = SixthTask(numb, i);
    if  (sixth_result == -1) {
        cout << "i should be less than 16 and greater than -1" << endl;
    } else {
        cout << sixth_result << endl;
    }

    cout << "Numbers for the seventh task: "<< endl;
    cin >> numb;
    cin >> i;
    int seventh_result = SeventhTask(numb, i);
    if  (seventh_result == -1) {
        cout << "i should be less than 16 and greater than -1" << endl;
    } else {
        cout << seventh_result << endl;
    }

    cout << "Numbers for the eighth task: "<< endl;
    cin >> numb;
    int eighth_result = EighthTask(numb);
    cout << eighth_result << endl;

    cout << "Numbers for the ninth task: "<< endl;
    cin >> numb;
    int ninth_result = NinthTask(numb);
    cout << ninth_result << endl;

    cout << "Numbers for the tenth task: "<< endl;
    cin >> numb;
    int fir;
    cin >> fir;
    int sec;
    cin >> sec;
    int tenth_result = TenthTask(numb, fir, sec);
    if  (tenth_result == -1) {
        cout << "i and j should be less than 16 and greater than -1" << endl;
    } else {
        cout << tenth_result << endl;
    }

    cout << "Numbers for the eleventh task: "<< endl;
    cin >> numb;
    cin >> i;
    int eleventh_result = EleventhTask(numb, i);
    if  (eleventh_result == -1) {
        cout << "i should be less than 16 and greater than -1" << endl;
    } else {
        cout << eleventh_result << endl;
    }

}