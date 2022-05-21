#include "lender.h"
#include "borower.h"
#include <string>
#include <iostream>
#include "bank.h"

using namespace std; 

int main(){
    Bank b;
    int choice1;
    cout<<"Welcome to lending and Borowing soft: choose one option\n1.lend_money\n2.borrow_money\n3.show_balance\n4.show_list_of_lenders\n5.show_list_of_borowers"<<endl;
    while(1){
    cin>>choice1;
    switch(choice1){
        case 1:
            b.lend_money();
            break;
        case 2:
            b.borrow_money();
            break;
        case 3: 
            b.Find_balance();
            break;
        case 4:
            b.show_all_lenders();
            break;
        case 5:
            b.show_all_borrower();
            break;
        default:
            break;
    }
    cout<<"Enter 0 to exit or any other key to continue:"<<endl;
    string k;
    cin>>k;
    if(k=="0") break;
    cout<<"choose one option\n1.lend_money\n2.borrow_money\n3.show_balance\n4.show_list_of_lenders\n5.show_list_of_borowers"<<endl;
    }
}