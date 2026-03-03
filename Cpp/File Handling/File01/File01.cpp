#include<iostream> //header file for input and output
#include<fstream> //header file for file handling
using namespace std;
// main function
int main(){ 
    ofstream fout("sample.txt"); //ofstream it will gonna create file and print the input as well
    fout<<"Hello World";
    fout.close(); //closing the file 
    return 0;
}
//end of the program 
//you can see the outputr in sample.txt