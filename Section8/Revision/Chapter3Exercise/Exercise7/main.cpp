#include <iostream>
using namespace std;

int main(){
    int i, j;
    string array[5];
    for (i=0; i<=4;i++)
    {
        cout << "Please Enter Five Country : ";
        cin >> array[i];
    }

    //Bubble Sort
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            string temp;
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    for(i=0;i<=4;i++){
        cout << endl << array[i] << endl;
    }

    system("pause");
}