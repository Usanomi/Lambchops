/*
Team Members: Steph Borla and Fady Youssef
Course: CPSC 122
Date Submitted: 3/20/2024
Assignment Name: Project 7
Description:
*/

#include <iostream>
using namespace std;


class Test {
private:
  int length;
  int width;

public:
  Test() {
    length = 0;
    width = 0;
  }
  int add() { return length + width; }
};

int main() { 
  cout << "This is test";
  cout << "Hello World!\n"; 
}