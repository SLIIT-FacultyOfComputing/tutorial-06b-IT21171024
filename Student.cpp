#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdId,char n[]) {
  studentId=stdId;
  strcpy(name,n);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID id"<<studentId<<"\n";
  cout<<"Student name is"<<name<<"\n";
}
