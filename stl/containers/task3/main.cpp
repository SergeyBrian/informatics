#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct SONET {
    vector<string> lines;
};

void readCrown(fstream * file, vector<SONET> * crown) {
    string line;
    for (int i = 0; i < 13; i ++) {
        SONET sonet;
        while (getline(*file, line)&&line!="***") {
            if (line.empty()) continue;
            sonet.lines.push_back(line);
        }
        crown->push_back(sonet);
    }
}

void readSonet(ifstream * file, SONET * sonet) {
    string line;
    while (getline(*file, line)) {
        if (line.empty()) continue;
        sonet->lines.push_back(line);
    }
}

bool compare (string string1, string string2) {
    int diff=0;

    for (int i = 0; i<string1.size(); i++) {
        if (diff > 4) return false;
        if (string1[i]!=string2[i]) diff++;
    }

    return true;
}

int main() {
    string crown_file_name, sonet_file_name;
    cout << "Enter file with unfinished crown: ";
    cin >> crown_file_name;
    cout << "Enter file with the 15th sonet: ";
    cin >> sonet_file_name;

    fstream crown_file(crown_file_name);
    ifstream sonet_file(sonet_file_name);

    vector<SONET> crown;
    SONET n_sonet;

    readCrown(&crown_file, &crown);
    readSonet(&sonet_file, &n_sonet);

    crown_file.close();
    crown_file.open(crown_file_name, ios::app);

    if (compare(n_sonet.lines.front(), crown.back().lines.back())) {
        cout << "Entered sonet is not correct!";
        exit(0);
    }

    crown_file << "\n***\n";
    for (const auto& line : n_sonet.lines)
        crown_file << line << endl;
    crown_file << "===" << endl;
    for (auto sonet : crown) {
        crown_file << sonet.lines.front() << endl;
    }
    crown_file << n_sonet.lines.front();


    return 0;
}
