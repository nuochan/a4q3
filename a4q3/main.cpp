//
//  CS-110 Assignment 4 Question 1
//  Nuo Chen
//  200327119
//  Created by Nuo Chen on 2014-03-15.
//  Introduction:prompt user to input a indefinite length string and count how many
//               letters showed up in the string
//

#include <iostream>
#include <cstring>

//to use #define instead of declare a constant variable
//is to save memory, althought small program like this
//won't take much memory
//define constant vocabulary for count
#define vocabulary 26
//define maximum string size
#define MaxStringSize 65535

using namespace std;

//globle variable strSize for function count
//if not will have to pass strSize to both
//function count and printNoneZero
int strSize = 0;
//function to count letters
void count(const char [], int []);
//print result
void printNoneZero(const int []);

int main()
{
    //reset counts to 0
    int counts[26] = {0};
    //input string
    string str;
    //character array that input string will turn into later
    char s[MaxStringSize];
    
    //prompt user to input a indefinite size string
    cout << "input a string." << endl;
    getline(cin, str);
    //flush input buffer
    cin.sync();
    
    //store size of input string into strSize
    strSize = static_cast<int>(str.length());
    //copy input string into character array
    strncpy(s, str.c_str(), sizeof(s));
    
    //count letters
    count(s, counts);
    //output result
    printNoneZero(counts);
    
    return 0;
}

//function that counts letters
void count(const char s[], int counts[]){
    for(int i = 0; i < strSize; i++){
        for(int j = 0; j < vocabulary; j++){
            //in ASCII, 'a' is 97 in integer while 'A' is 65 in integer
            //by forcing a char into a int, i can know what the char is
            //in ASCII with a for loop
            if((int)s[i] == j + 97 || (int)s[i] == j + 65){
                counts[j]++;
                break;
            }
        }
//a alternative solution with switch statement
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

//function that output characters showed up in input string
void printNoneZero(const int counts[]){
    for(int i = 0; i < vocabulary; i++){
        if(counts[i] != 0){
            //use numeric controls to output characters
            cout << static_cast<char>(i + 97) << ": " << counts[i] << " time(s)." << endl;
        }
    }
}