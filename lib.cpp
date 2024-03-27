#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library{
    public:
    int id, price, pages;
    char name[100];
    char author[100];
    char student[100];
};

int main(){
    Library lib[20];
    int input = 0;
    int count = 0;

    while(input != 3){
        cout << "Enter 1 to input details: id, name, author, price, pages, student name" << endl;
        cout << "Enter 2 to display details" << endl;
        cout << "Enter 3 to quit" << endl;

        cin >> input;
        switch(input){
            case 1:
                start:
                cout<<"Enter Book id" <<endl;
                cin>> lib[count].id;

                cout<<"Enter Book Name" <<endl;
                //cin>> lib[count].name;
                cin.getline(lib[count].name, 100, '$');

                cout<<"Enter Book Author" <<endl;
                //cin>> lib[count].author;
                cin.getline(lib[count].author, 100, '$');

                cout<<"Enter Book Price" <<endl;
                cin>> lib[count].price;

                cout<<"Enter Book Pages" <<endl;
                cin>> lib[count].pages;

                cout<<"Enter Student name" <<endl;
                //cin>> lib[count].student;
                cin.getline(lib[count].student, 100, '$');

                count++;
                break;

            case 2:
                for(int i=0; i<count; i++){
                    cout<<"Book id: "<< lib[i].id << endl;
                    cout<<"Book name: "<< lib[i].name;
                    cout<<"Book author: "<< lib[i].author;
                    cout<<"Book price: "<< lib[i].price << endl;
                    cout<<"Book pages: "<< lib[i].pages << endl;
                    cout<<"Book student name: "<< lib[i].student;
                    cout<<endl;
                }
                break;
            
            case 3:
                exit(0);
                break;

            default:
                cout<< "You have entered wrong value, please try again" << endl;
                goto start;
        }
    }
}