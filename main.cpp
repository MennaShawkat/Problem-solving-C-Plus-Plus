#include <iostream>
#include <sstream>
using namespace std;

//Problem link: https://www.hackerrank.com/challenges/c-tutorial-class/problem
/****
Sample Input
15
john
carmack
10

Sample Output
15
carmack, john
10

15,john,carmack,10
****/

class Student
{
    private:
       int age, standard;
       string first_name, last_name;
    public:
        void setAge(int input){age = input;}
        void setStandart(int input){standard = input;}
        void set_first_name(string input){first_name = input;}
        void set_last_name(string input){last_name = input;}

        int getAge(){return age;}
        int getStandard(){return standard;}
        string get_first_name(){return first_name;}
        string get_last_name(){return last_name;}

        string to_string()
        {
            stringstream ss;
            ss << age << " " << last_name << " " << first_name << " " << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.setAge(age);
    st.setStandart(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.getAge() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.getStandard() << endl;
    cout << endl;
    cout << st.to_string();

    return 0;
}
