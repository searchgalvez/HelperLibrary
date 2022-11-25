#pragma once
#include<iostream>
using namespace std;
namespace helper
{
    int GetValidatedInt(const char* Message, int MinimumRange = 0, int MaximumRange = 0) {
        cout << Message;
        int input;
        cin >> input;
        cin.clear();
        cin.ignore(1000, '\n');
        if ((MinimumRange == 0 && MaximumRange == 0) || (input >= MinimumRange && input <= MaximumRange))
            return input;
        else
            cout << "\nInvalid Integer Try Again. \n\n";
        return GetValidatedInt(Message, MinimumRange, MaximumRange);
    }
    string GetValidBirthday(const char* Message, const int Length) {
        int number = false, pos = -1;
        cout << Message;
        string result;
        cin >> result;
        cin.clear();
        cin.ignore(1000, '\n');
        for (int i = 0; i < result.length(); i++) {
            if (result[i] >= '0' && result[i] <= '9')
                number = true;
            if (result[i] == '/')
                pos = 1;
        }
        if (pos >= 0 && number && result.length() >= Length)
            return result;
        else
            cout << "\nInvalid Response Try Again. \n\n";
        return GetValidBirthday(Message, Length);
    }
    void RandomNum() {

        srand((unsigned)time(NULL));
        for (int i = 1; i <= 5; i++)
        {
            int random = 1 + (rand() % 100);
            cout << random << endl;
        }
    }
}

