#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main() {
    string filename;
    ifstream file("file.txt");
    string str;
    map<string, int> words;
    while(file>>str) {
        for (int i = 0; i < str.size(); i++) {

        }
        for (int i = 0; i < str.size(); i++)
            if (!isalpha(str[i]))
                str.erase(i);
        words.insert(pair<string, int>(str, 0));
        words[str] ++;
    }

    for (auto iter = words.begin(); iter != words.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    return 0;
}
