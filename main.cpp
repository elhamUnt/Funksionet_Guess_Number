#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

// Funksioni për të gjeneruar një numër
int gjeneroNumrin() {
    return rand() % 10 + 1;
}
void lojaGuessTheNumber() {
    int numriSekret = gjeneroNumrin(); 
    int numriIm;
    bool eSaktë = false;

    cout << "Mirësevini në lojën Guess the Number!" << endl;
    cout << "Unë kam zgjedhur një numër ndërmjet 1 dhe 10." << endl;
    cout << "Provo ta gjesh!\n" << endl;

    // Cikli derisa përdoruesi të gjejë numrin e saktë
    while (!eSaktë) {
        cout << "Shkruaj numrin tënd: ";
        cin >> numriIm;

        if (numriIm < numriSekret) {
            cout << "Është më e lartë se kaq. Provo përsëri!\n" << endl;
        } else if (numriIm > numriSekret) {
            cout << "Është më e ulët se kaq. Provo përsëri!\n" << endl;
        } else {
            cout << "E ke gjetur numrin: " << numriSekret << endl;
              eSaktë = true;
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    char luajPërsëri;

    // Cikli që pyet përdoruesin për të luajtur përsëri
    while (true) {
        lojaGuessTheNumber();
        cout << "\nDëshiron të luash përsëri? (y/n): ";
        cin >> luajPërsëri;

        if (luajPërsëri == 'n' || luajPërsëri == 'N') {
            break; // Del nga cikli nëse përdoruesi zgjedh 'n'
        }
    }

    cout << "Faleminderit që luajte! Mirupafshim!" << endl;
    return 0;
}

