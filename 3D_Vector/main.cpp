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
    
    // cross product
    Vec v1(6,0,-2);
    Vec v2(4,3,7);
    Vec v3 = v3.crossProduct(v1,v2);
    v3.printVectorInfo();
    
    Vec v4(6,0,-2);
    Vec v5(-2,5,4);
    Vec v6 = v6.crossProduct(v4,v5);
    v6.printVectorInfo();
    
    Vec v7(-2,5,4);
    Vec v8(4,3,7);
    Vec v9 = v9.crossProduct(v7,v8);
    v9.printVectorInfo();
    
    // distance
    Vec v10(6,0,-2);
    Vec v11(4,3,7);
    Vec PQ = PQ.combineVectors(v10, v11);
    PQ.printVectorInfo();
    
    // Scalar projection
    Vec a(-2,3,1);
    Vec b(1,1,2);
    double c = a.compBA(a,b);
    cout << "C is: " << c << endl;
    
    cout << "\nprocess finished!!" << endl;
    
    return 0;
}