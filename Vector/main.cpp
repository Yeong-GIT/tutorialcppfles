#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_vec(const vector <T> & vec){
    for(size_t i{}; i< vec.size(); ++i){
        cout<< vec[i]<< " ";
    }
    cout << endl;
}


int main(){
    vector<string> vec1 {"The", "sky", "is", "blue", "my", "friend"};
    cout<<"vec1[2] : " <<vec1[2] <<endl;
    print_vec(vec1);
}