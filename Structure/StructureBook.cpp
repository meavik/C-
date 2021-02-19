#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

struct Book{
private:
    string BookName;
    string AuthorName;
    int PageNo;
    int Price;
public:
    Book(string BookName,string AuthorName,int PageNo,int Price){
        this->BookName = BookName;
        this->AuthorName = AuthorName;
        this->PageNo = PageNo;
        this->Price = Price;
    }
    void show(){
        cout<<"Book name: "<<this->BookName<<endl;
        cout<<"Author name: "<<this->AuthorName<<endl;
        cout<<"Page no: "<<this->PageNo<<endl;
        cout<<"Book Price: "<<this->Price<<endl;
    }
};

int main(){
    struct Book *b1;
    b1 = new Book("Book-Name","Author-Name",13,30);
    b1->show();

    return 0;
}
