#include<iostream>
#include<string>
#include<vector>
#include<fstream>


#include<sstream>

#include<cstdio>
#include<filesystem>

#include<stdio.h>

using namespace std;

class Bank{
    public:
        int Balance  =10000;
        void show_all_lenders(){
                
            fstream fin; 
            vector<string> row;
            string line, word;
            
            fin.open("lenderdb.txt", ios::in);
  
            while (!fin.eof()) {
                row.clear();
                getline(fin, line);
                stringstream s(line);
      
                while (getline(s, word, ',')) {
                    row.push_back(word);
                }
                cout<<"Lender "<<row[0]<<"\nAmount: "<<row[1]<<endl<<endl;
            }
            cout<<"task finished\n";
            fin.close();
            }
        

        void show_all_borrower(){
            fstream fin; 
            vector<string> row;
            string line, word;
            
            fin.open("borrowerdb.txt", ios::in);
  
            while (!fin.eof()) {
                row.clear();
                getline(fin, line);
                stringstream s(line);
      
                while (getline(s, word, ',')) {
                    row.push_back(word);
                }
                cout<<"Borrower "<<row[0]<<"\nAmount: "<<row[1]<<endl<<endl;
            }
            cout<<"task finished\n";
            fin.close();
        }

        void Find_balance(){
        cout<<Balance<<endl;
    }
        void lend_money(){
            string s;
            int n;
            cout<<"Enter name of lender:"<<endl;
            cin>>s;
            cout<<"Enter amount to lend:"<<endl;
            cin>>n;
            Lender len(s,n);
            Balance += n;
        }
        void borrow_money(){
            string s;
            int n;
            cout<<"Enter name of borrower:"<<endl;
            cin>>s;
            cout<<"Enter amount to borrow:"<<endl;
            cin>>n;
            Lender len(s,n);
            Balance -= n;   
        }

};