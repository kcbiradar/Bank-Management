#ifndef BUILDING_H
#define BUILDING_H

#include<bits/stdc++.h>

using namespace std;

class Building {
    int height;
    string room_type;
    string room_direction;

    public:
        int getHeight() {
            return height;
        }

        string getRoomtype() {
            return room_type;
        }

        string getRoom_direction() {
            return room_direction;
        }

        void setHeight(int h) {
            height = h;
        } 

        void setRoomtype(string s) {
            room_type = s;
        }

        void setRoom_direction(string s) {
            room_direction = s;
        }

        Building() {}

        Building(int h , string rt , string rd) : height{h} , room_type{rt} , room_direction{rd} {}

};
#endif