#include <iostream>
#include <string>

using namespace std;

int main() {
    string content;
    
    // Read word by word until the end of the file
    while (cin >> content) {
        cout << content << " ";
    }
    
    cout << endl; 
    return 0;
}