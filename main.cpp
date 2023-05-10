#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> registry;
map<int, string> reg;
string surname;
int number = 1;
string calling;
string str;
int count = 0;


int main() {
    while (1) {
        cout << "add surname:";
        cin >> surname;
        registry.insert(pair<string, int>(surname, number));
        reg.insert(pair<int, string>(number, surname));
        number++;

        auto it = registry.find(surname);
        auto its = reg.find(number);

        cout << "if you want to calling a person then click next:";
        cin >> calling;
        if (calling == "next") {
            for (it = registry.begin(); it != registry.end(); it++) {
                cout << it->first << endl;
                str = it->first;
                for (its = reg.begin(); its != reg.end(); its++) {
                    if (str == its->second) {
                        count++;
                        if (str == its->second && count > 1) {
                            cout << its->second << endl;
                            count--;
                        }

                    }

                }
                count = 0;
            }

            while (!(registry.empty())) {

                str = registry.begin()->first;
                for (its = reg.begin(); its != reg.end(); its++) {
                    if (str == its->second) {
                        count++;


                    }

                }

                for (int i = 0; i < count; i++) {
                    cout << "next" << endl;
                    cout << registry.begin()->first << endl;

                }
                count = 0;


                registry.erase(str);


            }


        }


    }


    return 0;

}