#include <iostream>
#include <string>
#include <map>

using namespace std;

map < string, int > registry;
string surname;
int number = 1;
int count = 5;

int main() {
    while(count != 0)
    {
        cout << "add surname:" ;
        cin >> surname;
        registry.insert(pair < string, int >( surname, number));
        number ++;
        count --;
    }

    int val = 5;
    while(val != 0)

   {
       auto it = registry.begin();
        cout << registry.begin()->first << endl;
        registry.erase(it);
        val --;
   }



    return 0;
}
