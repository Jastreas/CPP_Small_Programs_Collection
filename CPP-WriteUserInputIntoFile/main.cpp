#include <iostream>
#include <fstream>
using namespace std;

bool checkInput(const string& input){
    return input.empty();
}

int main(){

    string text = "";
    cout << "Please introduce the text you want to save to a file." << endl;
    getline(cin, text);

    if(!checkInput(text)){

        ofstream file("test.txt");

        if(file.is_open()){
            file << text;
            cout << "Successfully written into the file" << endl;
            file.close();
        } else {
            cout << "Couldn't write into the file" << endl;
            return 1;
        }
    } else {
        cout << "Error: The input was empty, no file created" << endl;
        return 1;
    }
return 0;
}