#include <iostream>
using namespace std;

int main(){
    cout << "What day is today? : "<<endl;
    int today, day_passed;
    cin >> today;

    if((today < 1 || today > 7)){
        cout << today << "is not a valid day." <<endl;
        return 0;
    }

    cout << "How many has passed from today? " <<endl;
    cin >> day_passed;

    if (today == 1){
        cout << "Monday" <<endl;
    }else if(today == 2){
        cout << "Tuesday" <<endl;
    }else if(today == 3){
        cout << "Wednesday" <<endl;
    }else if(today == 4){
        cout << "Thursday" <<endl;
    }else if(today == 5){
        cout << "Friday" <<endl;
    }else if(today == 6){
        cout << "Saturday" <<endl;
    }else{
        cout << "Sunday" <<endl;
    }

    int normalized_diff = (day_passed % 7);
    int day_in_the_passed = today - normalized_diff;

    if(day_in_the_passed < 0){
        day_in_the_passed += 7;
    }

    cout << "If we went " << day_passed << "days in the past we would come with a ";
    if(day_in_the_passed == 1){
        cout << "Monday" <<endl;
    }else if(day_in_the_passed == 2){
        cout << "Tuesday" <<endl;
    }else if(day_in_the_passed == 3){
        cout << "Wednesday" <<endl;
    }else if(day_in_the_passed == 4){
        cout << "Thursday" <<endl;
    }else if(day_in_the_passed == 5){
        cout << "Friday" <<endl;
    }else if(day_in_the_passed == 6){
        cout << "Saturday" <<endl;
    }else{
        cout <<"Sunday" <<endl;
    }
    return 0;
}