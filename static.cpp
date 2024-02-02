#include<bits/stdc++.h>

using namespace std;

class Player {
    public:
        Player() {
            health = 100;
            score = 0;
        }

        void PrintLevel() {
            cout << level << endl;
        }

        static int ChangeLevel(int change) {
            level = change;
            return level;
        }

        static string ChangeColor(string color) {
            color = color;
            return color;
        }
    private:
        int health;
        int score;
        static int level;
        string color;
};

int Player::level = 5;

int main() {
    Player p , p2;
    if(typeid(p) == typeid(p2)) {
        cout << "Yes both belongs to the same class\n";
    }
    p.PrintLevel();
    cout << Player::ChangeColor("red") << endl;
    cout << Player::ChangeLevel(10) << endl;
}