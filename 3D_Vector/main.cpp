/* 
 * File:   main.cpp
 * Author: Armand Moussaouyi
 *
 * Created on October 28, 2018, 10:22 PM
 */
#include <iostream>
#include <cstdlib>
#include "Vec.h"

using namespace std;

int main() {
    string grtng = "Hello Armand!\nWelcome to your 3D vector object";
    Vec vec1(2.0, 4.0, 6.0);
    Vec vec2(8.0, 6.0, 4.0), vec3;
    double x, y, z;
        
    cout << grtng << endl;
    cout << "processing...\n" << endl;
    
    vec1.printVectorInfo();
    vec2.printVectorInfo();
    vec3.printVectorInfo();
    
    // Vector addition
    cout << "\tVector Addition\n--------------------------------------------\n";
    vec3 = vec1 + vec2;
    cout << "\tvec1 + vec2 is : <" << vec3.getX() << ", " << vec3.getY() << ", " << vec3.getZ() << ">\n";
    cout << "\tvec3 length is : " << vec3.getLength() << endl;
    cout << "\tvec3 size is   : " << vec1.getSize() << "\n" << endl;
    
    // Vector subtraction
    cout << "\tVector Subtraction\n--------------------------------------------\n";
    vec3 = vec3 - vec1;
    cout << "\tvec3 - vec1 is : <" << vec3.getX() << ", " << vec3.getY() << ", " << vec3.getZ() << ">\n";
    cout << "\tvec3 length is : " << vec3.getLength() << endl;
    cout << "\tvec3 size is   : " << vec1.getSize() << "\n" << endl;
    
    // Vector multiplication
    cout << "\tVector Multiplication\n--------------------------------------------\n";
    vec3 = vec3 * vec1;
    cout << "\tvec3 * vec1 is : <" << vec3.getX() << ", " << vec3.getY() << ", " << vec3.getZ() << ">\n";
    cout << "\tvec3 length is : " << vec3.getLength() << endl;
    cout << "\tvec3 size is   : " << vec1.getSize() << "\n" << endl;
    
    // Vector division
    cout << "\tVector Division\n--------------------------------------------\n";
    vec3 = vec3 / vec1;
    cout << "\tvec3 / vec1 is : <" << vec3.getX() << ", " << vec3.getY() << ", " << vec3.getZ() << ">\n";
    cout << "\tvec3 length is : " << vec3.getLength() << endl;
    cout << "\tvec3 size is   : " << vec1.getSize() << "\n" << endl;
    
    cout << "\nprocess finished!!" << endl;
    
    return 0;
}