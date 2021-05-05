//Author: Shubham Agarwal
//Date: 05/05/2021
//Projrct: Intent Recognizer


#include <iostream>
#include<string>
using namespace std;

int main(int argc,char* argv[])
{
    string inputString;

//Defining string variables to compare with input argument
    string str1 ("weather like today");
    string str2 ("weather like in Paris today");
    string str3 ("weather like in New York today");
    string str4 ("13:00 PM tomorrow");
    string str5 ("interesting fact");

//loop for concatenating string entered command line  
    for(int i = 1; i < argc; i++){
        inputString = inputString +" "+ argv[i];
    }

//Comparing input string with intent strings
    if(inputString.find(str1) != string::npos){
        cout<< "Get Weather" <<endl;
    }
    else if (inputString.find(str2) != string::npos){
        cout<< "Get Weather City" <<endl;
    }
    else if (inputString.find(str3) != string::npos){
        cout<< "Get Weather City" <<endl;
    }
    else if (inputString.find(str4) != string::npos){
        cout<< "Check calendar" <<endl;
    }
    else if (inputString.find(str5) != string::npos){
        cout<< "Get Fact" <<endl;
    }
    else{
        cout<< "Enter correct command" << endl;
    }

    return 0;
}
