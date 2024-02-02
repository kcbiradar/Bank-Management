#include<bits/stdc++.h>

using namespace std;

void checkAge(int age) {
    if(age < 18) {
        throw logic_error("Age must be at least 18");
    }

    if(age > 100) {
        throw out_of_range("Age cannot be greater than 100");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    try {
        checkAge(12);
    } catch(const invalid_argument& e) {
        std::cout << "Invalid argument: " << e.what() << std::endl;
    } catch(const out_of_range& e) {
        std::cout << "Out of range: " << e.what() << std::endl;
    } catch(const exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

}