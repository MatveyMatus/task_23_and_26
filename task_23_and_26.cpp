#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

void abob() {
    string s;
    ifstream a("in1.txt");
    ofstream b("out1.txt");

    while (!a.eof()) {
        getline(a, s);
        s[0] = toupper(s[0]);
        int pos = s.find(' ', 0);
        while (pos != string::npos) {
            s[pos + 1] = toupper(s[pos + 1]);
            pos = s.find(' ', pos + 1);

        }
        b << s << endl;
    }
    cout << "wel" << endl;
    a.close();
}

void abod() {
    string s;
    ifstream a("in2.txt");
    ofstream b("out2.txt");
    map <char, double> bob;
    map <char, double>::iterator dod = bob.begin();
    while (!a.eof()) {
        getline(a, s);
        for (int i = 0; i < s.length(); ++i) {
            if (bob.find(s[i]) != bob.end()) {
                dod = bob.find(s[i]);
                dod->second++;
            }
            else { bob.insert({ s[i],1 }); }
        }
    }

    for (dod = bob.begin(); dod != bob.end(); dod++) {
        b << dod->first << ' ' << (dod->second * 1.0) / (s.length() * 1.0) << endl;
    }

    cout << "come";
    a.close();
}


int main()
{
    abob();
    abod();
}