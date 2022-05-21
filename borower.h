#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Borrower{
    public:
    string name;
    int amt;
    Borrower(string s, int amount){
        name = s;
        amt = amount;
        
        fstream borrowerdb;
        string filename="borrowerdb.txt";
        borrowerdb.open(filename.c_str(),ios::app);
        borrowerdb<<endl<<name<<","<<amt;
    };
};