#include <iostream>
#include <string>

using namespace std;

int main() {
    string val;
    
    // Read word by word until the end of the file
    while (cin >> val) {
        cout << val << " ";
    }
    
    cout << endl; 
    return 0;
}