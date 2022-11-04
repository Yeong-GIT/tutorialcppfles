#include <iostream>
using namespace std;

int main(){
    cout << "Please enter your first and second name\n";
    string first;
    string second;
    cin >> first >> second;
    string name = first + ' ' + second; //concatenation string
    cout << "Hello, " << name <<'\n';

    cout <<"Please enter two names\n";
    string firstname;
    string secondname;
    cin >> firstname >> secondname;
    if(firstname == secondname)
    cout << "That's the same name twice\n";
    if(firstname < secondname)
    cout << firstname << " is alphabetically before "<<secondname << '\n';
    if(firstname > secondname)
    cout << firstname << " is alphabetically after "<<secondname <<'\n';
    return 0;
}