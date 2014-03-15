//
//  main.cpp
//  a4q3
//
//  Created by Chris Chen on 2014-03-15.
//  Copyright (c) 2014 Nuo Chen. All rights reserved.
//

#include <iostream>
#include <cstring>

#define vocabulary 26
#define MaxStringSize 65535

using namespace std;

int strSize = 0;
void count(const char [], int []);
void printNoneZero(const int []);

int main()
{
    int counts[26] = {0};
    string str;
    char s[MaxStringSize];
    cout << "input a string." << endl;
    getline(cin, str);
    cin.sync();
    
    strSize = static_cast<int>(str.length());
    strncpy(s, str.c_str(), sizeof(s));
    
    count(s, counts);
    printNoneZero(counts);
    
    return 0;
}

void count(const char s[], int counts[]){
    for(int i = 0; i < strSize; i++){
        for(int j = 0; j < vocabulary; j++){
            if((int)s[i] == j + 97 || (int)s[i] == j + 65){
                counts[j]++;
                break;
            }
        }
 /*
        switch(s[i]){
            case 'A':
            case 'a':
                counts[0]++;
                break;
            case 'B':
            case 'b':
                counts[1]++;
                break;
            case 'C':
            case 'c':
                counts[2]++;
                break;
            case 'D':
            case 'd':
                counts[3]++;
                break;
            case 'E':
            case 'e':
                counts[4]++;
                break;
            case 'F':
            case 'f':
                counts[5]++;
                break;
            case 'G':
            case 'g':
                counts[6]++;
                break;
            case 'H':
            case 'h':
                counts[7]++;
                break;
            case 'I':
            case 'i':
                counts[8]++;
                break;
            case 'J':
            case 'j':
                counts[9]++;
                break;
            case 'K':
            case 'k':
                counts[10]++;
                break;
            case 'L':
            case 'l':
                counts[11]++;
                break;
            case 'M':
            case 'm':
                counts[12]++;
                break;
            case 'N':
            case 'n':
                counts[13]++;
                break;
            case 'O':
            case 'o':
                counts[14]++;
                break;
            case 'P':
            case 'p':
                counts[15]++;
                break;
            case 'Q':
            case 'q':
                counts[16]++;
                break;
            case 'R':
            case 'r':
                counts[17]++;
                break;
            case 'S':
            case 's':
                counts[18]++;
                break;
            case 'T':
            case 't':
                counts[19]++;
                break;
            case 'U':
            case 'u':
                counts[20]++;
                break;
            case 'V':
            case 'v':
                counts[21]++;
                break;
            case 'W':
            case 'w':
                counts[22]++;
                break;
            case 'X':
            case 'x':
                counts[23]++;
                break;
            case 'Y':
            case 'y':
                counts[24]++;
                break;
            case 'Z':
            case 'z':
                counts[25]++;
                break;
            default:
                break;
        }
 */
  }
}

void printNoneZero(const int counts[]){
    for(int i = 0; i < vocabulary; i++){
        if(counts[i] != 0){
            cout << static_cast<char>(i + 97) << ": " << counts[i] << " time(s)." << endl;
        }
    }
}