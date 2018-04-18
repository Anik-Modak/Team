#include<iostream>
#include "todoclass.h"
using namespace std;

string path;
//ofstream the_path(path.c_str(), ios::out);
void clean_buffer() {
    cin.clear();
    cin.sync();
}

int main(){

    cout << "Enter your file Name: ";
    cin >> path;

    bool working = true;
    cout << "Welcome to To-Do list program!\n" << endl;
    int choice;

    todolist obj;

    do {
        int choice = obj.menu();
        switch(choice) {

            case 1:
                obj.showList();
                break;

            case 2:
                int amount;
                cout << "\t Add New Items\n" << endl;
                cout << "Enter how many items do you want to add: ";
                clean_buffer();
                cin >> amount;
                obj.addItems(amount);
                break;

            case 3:
                obj.removeItems();
                break;

            case 4:
                cout << "Have a nice day!" << endl;
                working = false;
                break;

            default:
                cout << "Input was invaild Try again or "<< "\n enter 4 to exit." << endl;
                bool working = true;

        }
    } while (working == true);

    return 0;
}
