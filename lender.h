#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Lender{
    public:
    string name;
    int amt;
    Lender(string s, int amount){
        name = s;
        amt = amount;
        
        fstream lenderdb;
        string filename="lenderdb.txt";
        lenderdb.open(filename.c_str(),ios::app);
        lenderdb<<endl<<name<<","<<amt;
    }
    };