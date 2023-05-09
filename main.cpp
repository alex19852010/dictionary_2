#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> registry;
string surname;
int number = 1;
string calling;

int main() {
    while (1) {
        cout << "add surname:";
        cin >> surname;
        registry.insert(pair<string, int>(surname, number));
        number++;

        auto it = registry.find(surname);

        cout << "if you want to calling a person then click next:";
        cin >> calling;
        if(calling == "next")
        {
            for (it = registry.begin(); it != registry.end(); it++) {
                cout << it->first << endl;
            }

            while( !(registry.empty()) )
            {
                auto m = registry.begin();
                cout << "next" << endl;
                cout << registry.begin()->first << endl;
                registry.erase(m);
            }


        }
//        else
//        {
//            for (it = registry.begin(); it != registry.end(); it++) {
//                cout << it->first << endl;
//            }
//        }
    }

        return 0;
    }


