#include <iostream>
#include <vector>
#include <string>
#include <sstream>


using namespace std;

int main(int argc, char*argv[])
{
    string entry;
    vector<int> numbers;
    cout << "Enter your notes" << endl;

    while(getline(cin,entry)){
        if(entry.empty()){
            break;
        }

        double number;
        istringstream iss(entry);
        if(iss >> number){
            numbers.push_back(number);
        }else{
            cout << "Invalid Entry" << endl;
        }
    }

    double add;
    for(double num : numbers){
        add += num;
    }
                    // condition ? value if real : value if false
    double media = numbers.empty() ? 0.0 : add / numbers.size();

    cout << "The average of the numbers entered is: " << media << endl;
}