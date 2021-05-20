#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

struct NOTE {
    string firstname;
    string lastname;

    int phone_number;
    int birthdate[3];
};

bool compare(const string& str1, const string& str2, bool desc=true) {
    int i = 0;
    while(str1[i] == str2[i]) i++;
    return (int)str1[i] < (int)str2[i] && desc;
}

void sort(vector<NOTE> * array) {
    for (int i = 0; i + 1 < array->size(); i ++) {
        for (int j = 0; j + 1 < array->size() - i; j ++) {
            if (compare(array->at(j + 1).firstname, array->at(j).firstname)) {
                NOTE tmp = array->at(j);
                array->at(j) = array->at(j+1);
                array->at(j+1) = tmp;
            }
        }
    }
}

int main() {
    vector<NOTE> BLOCKNOTE;
    string filename;

    cout << "Enter file name: ";
    cin >> filename;
    ifstream file(filename);

    string str;
    while(getline(file, str)) {
        string firstname, lastname;
        int phone;
        int birthdate[3];

        firstname = str.substr(0, str.find(' '));
        str.erase(0, str.find(' ')+1);
        lastname = str.substr(0, str.find(' '));
        str.erase(0, str.find(' ')+1);
        phone = stoi(str.substr(0, str.find(' ')));
        str.erase(0, str.find(' ')+1);
        for (int & i : birthdate) {
            i = stoi(str.substr(0, str.find('.')));
            str.erase(0, str.find('.')+1);
        }
        NOTE note = {firstname, lastname, phone, birthdate[0], birthdate[1], birthdate[2]};
        BLOCKNOTE.push_back(note);
    }

    sort(&BLOCKNOTE);
    int required_month;
    bool result = false;
    cout << "Enter month: ";
    cin >> required_month;

    for (auto note : BLOCKNOTE) {
        if (note.birthdate[1] == required_month) {
            cout << note.firstname << " " << note.lastname << " +" << note.phone_number << " " << setw(2) << setfill('0') << note.birthdate[0] << "." << setw(2) << setfill('0') << note.birthdate[1] << "." << note.birthdate[2] << endl;
            result = true;
        }
    }

    if(!result) cout << "No people have birthday in this month!" << endl;

    return 0;
}
