#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> surnamecount;
string surname;
int number = 1;
string calling;
string str;
int count = 0;
int n = 3;


int main() {
    while (1) {


        cout << "add surname:";
        cin >> surname;

        auto it = surnamecount.find(surname);

        if (it == surnamecount.end()) {
            surnamecount.insert(pair<string, int>(surname, number));
        } else {
            auto m = surnamecount.find(surname);
            surnamecount[surname]++;

        }

        cout << "if you want to calling a person then click next:";
        cin >> calling;

        if (calling == "next") {
            for (it = surnamecount.begin(); it != surnamecount.end(); it++) {
                int a = it->second;
                for (int i = 0; i < a; i++) {

                    cout << it->first << endl;
                }
            }
            while (!(surnamecount.empty())) {
                str = surnamecount.begin()->first;
                int a = surnamecount.begin()->second;
                for (int i = 0; i < a; i++) {
                    cout << "next" << endl;
                    cout << surnamecount.begin()->first << endl;
                }

                surnamecount.erase(str);

            }
        }


    }
    return 0;

}