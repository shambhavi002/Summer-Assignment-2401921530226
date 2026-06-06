#include <iostream>
using namespace std;

// Interface
class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

// KidUsers class
class KidUsers : public LibraryUser {
public:
    int age;
    string bookType;

    // registerAccount method
    void registerAccount() {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    // requestBook method
    void requestBook() {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only Kids books" << endl;
        }
    }
};

// AdultUser class
class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    // registerAccount method
    void registerAccount() {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        } else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    // requestBook method
    void requestBook() {
        if (bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only Fiction books" << endl;
        }
    }
};

// Main function
int main() {

    // Kid User
    KidUsers kid;
    kid.age = 10;
    kid.bookType = "Kids";

    kid.registerAccount();
    kid.requestBook();

    cout << endl;

    // Adult User
    AdultUser adult;
    adult.age = 23;
    adult.bookType = "Fiction";

    adult.registerAccount();
    adult.requestBook();

    return 0;
}
