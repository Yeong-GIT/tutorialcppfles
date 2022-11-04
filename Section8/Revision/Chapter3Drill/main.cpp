#include <iostream>
using namespace std;

int main(){
    string firstname = " ";
    string lastname = " ";
    cout << "Enter the name of the person you want to write to" << endl;
    cin >> firstname >> lastname;
    cout << "Dear " << firstname << "," << '\n'
    << "  \"How are you? I am fine. I miss you.\" " << '\n'
    << "I am here to write this letter about the code I write this night." <<endl;

    cout << "Enter a friend's name" << endl;
    string friend_name = " ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << '\n';

    char friend_sex = 0;
    cout << "Is your friend male or female? Enter m(male) and f(female)."<< endl;
    cin >> friend_sex;
    if (friend_sex == 109){ // 109 is m in ASCII table
        cout << "If you see "<< friend_name <<" please ask him to call me.";
    }else if (friend_sex == 102){ //102 is f in ASCII table
        cout << "If you see "<< friend_name <<" please ask her to call me.";
    }else
        cout << "Please ask " << friend_name << " to call me" << endl;

    cout << "\nPlease enter the age of your recipient." <<endl;
    int age_recipient = 0;
    cin >> age_recipient;
    cout << " I hear you just had a birthday and you are " << age_recipient << " years old."<<endl;
    if (age_recipient <= 0 || age_recipient >= 110){
        cout << "You're kidding!" << endl;
    }else if(age_recipient < 12){
        cout << "Next year you will be " << age_recipient + 1 << endl;
    }else if (age_recipient == 17){
        cout << "Next year you will be able to vote." <<endl;
    }else if (age_recipient > 70){
        cout << "I hope you are enjoying your retirement." << endl;
    }

    cout << "Yours sincerely," <<endl <<endl <<"Yeong." <<endl;

    
    
    return 0;
}