#include <iostream>

using namespace std;

int main() {
    int wiek;
    cout << "podaj wiek: " << endl;
    cin >> wiek;

    if (cin.fail()) {
        cout << "To nie jest poprawna liczba!!!" << endl;
    }else {
        if (wiek >= 18) {
            cout << "jesteś pełnoletni!" << endl;
        } else {
            cout << "Jestes nie pelnoletni!"<<endl;
        }
    }

}