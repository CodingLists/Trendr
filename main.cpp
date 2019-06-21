#include <iostream>
#include <eosio/eosio.hpp>
#include <cmath>

using namespace eosio;

const int storage = 1000;
int index = 0;
string bulletin[storage];

void createAMessage();
string returnBulletin();

bool checker = true;

int main()
{
    int next;


            while(true)
            {
                next = 0;

                cout <<"1. Create Message" << "\n" << "2. Read Messages" << endl;
                cin >> next;

                if(next == 1)
                    cout <<"gay\n";
                else if(next == 2)
                    createAMessage();

            }


}


    createAMessage();
    cout << index;

    return 0;
}

void createAMessage()
{
    checker = false;
    string message;
    cout << "Enter your message: ";
    getline(cin, message);
    bulletin[index] = message;
    ++index;
    checker = true;

}




