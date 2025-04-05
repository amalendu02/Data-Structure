#include<iostream>
#include <unordered_map>
#include<string>
using namespace std;

int main () {

    // creation
    unordered_map<string, int> mapping;

    //insertion
    pair<string, int> p = make_pair("love", 25);
    pair<string,int> q("dipash", 24);

    pair<string,int> r;
    r.first = "arun";
    r.second = 21;

    // insertion
    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    // insertion diffrent type
    mapping["babbar"] = 51;

    cout << "size of map: " << mapping.size() << endl;

    // printing value using at member function
    // ACCESS
    cout << mapping.at("arun") << endl;
    cout << mapping["arun"] << endl;

    // if you applied count function in any key , IF the value is present insie the key then it print 1 | IF not fount it print 0
    cout << mapping.count("love") << endl;

    // member function find
    if(mapping.find("babbar") != mapping.end()) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    cout << "Size of map: " << mapping.size() << endl;
    // while trying to map new value it increase size
    cout << mapping["kumar"] << endl;
    cout << mapping["Maiti"] << endl;
    cout << "Size of map: " << mapping.size() << endl;

    return 0;
}




  