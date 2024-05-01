// Restaurant class file
#include <iostream>
using namespace std;

class Restaurant {
    private:
        string name;        // required
        double rating;      // 0 - 5 stars, required
        string comment;     // optional

    public:
        // constructor -- how we make an object
        Restaurant(string n, double r) {
            name = n;
            rating = r;
            comment = "None";
        }
        // getters and setters -- work with data in the object
        string getName() const {
            return name;
        }
        double getRating() const {
            return rating;
        }
        string getComment() const {
            return comment;
        }
        void setName(string n) {
            name = n;
        }
        void setRating(double r) {
            rating = r;
        }
        void setComment(string c) {
            comment = c;
        }
        // utility function -- print the full review
        void  printReview() {
            cout << "Name: " << name << " ";
            cout <<  "(" << rating << "/5 stars)" << endl;
            cout << "Comments: " << comment << endl;
        }


};