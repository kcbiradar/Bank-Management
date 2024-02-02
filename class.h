#ifndef CLASS_H
#define CLASS_H

#include<bits/stdc++.h>

using namespace std;

class Greeting {
    string greeting;
    public:
        Greeting(string g)  {
            greeting = g;
        }

        string GetGreeting() {
            return greeting;
        }

        void setGreeting(string new_greeting) {
            greeting = new_greeting;
        }
};

#endif