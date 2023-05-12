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

int main() {
    while (1) {

        cout << "add surname:";
        cin >> surname;

        auto it = surnamecount.find(surname);

        if (it == surnamecount.end()) {
            surnamecount.insert(pair<string, int>(surname, number));
        } else {
            
            it->second ++;

        }

        cout << "if you want to calling a person then click next:";
        cin >> calling;

        if (calling == "next") {

            it = surnamecount.begin();
            str = it->first;
            cout << "next" << endl;
            cout << it->first << endl;
            if(it->second == 1) {
                
                surnamecount.erase(str);
            }
            else{
                  it->second --;
                
            }
            
        }
        else{
            for(it = surnamecount.begin(); it != surnamecount.end(); it ++)
                {
                
                    int n = it->second;
                    for(int i = 0; i < n; i ++)
                    {
                        cout << it->first << endl;
                        
                    }
                }
        }

    

    }



    return 0;

}