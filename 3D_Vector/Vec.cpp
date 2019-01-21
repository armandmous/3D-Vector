/* 
 * File:   Vec.cpp
 * Author: arman
 * 
 * Created on October 28, 2018, 10:29 PM
 */
#include "Vec.h"
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

Vec Vec::operator + (const Vec &right){
    Vec temp;
    
    temp.x = x + right.x;
    temp.y = y + right.y;
    temp.z = z + right.z;
    
    return temp;
}

Vec Vec::operator - (const Vec &right){
    Vec temp;
    
    temp.x = x - right.x;
    temp.y = y - right.y;
    temp.z = z - right.z;
    
    return temp;
}

Vec Vec::operator * (const Vec &right){
    Vec temp;
    
    temp.x = x * right.x;
    temp.y = y * right.y;
    temp.z = z * right.z;
    
    return temp;
}

Vec Vec::operator / (const Vec &right){
    Vec temp;
    
    temp.x = x / right.x;
    temp.y = y / right.y;
    temp.z = z / right.z;
    
    return temp;
}

double Vec::getLength(){
    return (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
}

void Vec::printVectorInfo(){
    cout << "\tVector info\n*************************************************\n";
    cout << "*  Vec           : <" << getX() << ", " << getY() << ", " << getZ() << ">\n";
    cout << "*  vec length is : " << getLength() << "\n";
    cout << "*  vec size is   : " << getSize() << "\n";
    cout << "*************************************************\n" << "\n";
}