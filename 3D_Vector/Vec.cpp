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


/*******************************************************************************
* Component wise addition
*******************************************************************************/
Vec Vec::operator + (const Vec &right){
    Vec temp;
    
    temp.x = x + right.x;
    temp.y = y + right.y;
    temp.z = z + right.z;
    
    return temp;
}

/*******************************************************************************
* Component wise subtraction
*******************************************************************************/
Vec Vec::operator - (const Vec &right){
    Vec temp;
    
    temp.x = x - right.x;
    temp.y = y - right.y;
    temp.z = z - right.z;
    
    return temp;
}

/*******************************************************************************
* Component wise multiplication
*******************************************************************************/
Vec Vec::operator * (const Vec &right){
    Vec temp;
    
    temp.x = x * right.x;
    temp.y = y * right.y;
    temp.z = z * right.z;
    
    return temp;
}

/*******************************************************************************
* Overloading the division operator to divide each component of a vector
* computes the element wise division of two vectors
*******************************************************************************/
Vec Vec::operator / (const Vec &right){
    Vec temp;
    
    temp.x = x / right.x;
    temp.y = y / right.y;
    temp.z = z / right.z;
    
    return temp;
}

/*******************************************************************************
* computes and returns the length or magnitude of the vector
*******************************************************************************/
double Vec::getLength(){
    return (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
}

/*******************************************************************************
* computes dot-product of two vectors and returns a scalar
*******************************************************************************/
int Vec::dotProduct(Vec vec1, Vec vec2){
    return ((vec1.x * vec2.x) + (vec1.y * vec2.y) + (vec1.z * vec2.z));
}

/*******************************************************************************
*computes the dot product of vector 1 and 2 and returns a new vector object
*******************************************************************************/
Vec Vec::crossProduct(Vec vec1, Vec vec2){
    Vec temp;
    
    temp.x = ((vec1.y * vec2.z) - (vec1.z * vec2.y));
    temp.y = (-1) * ((vec1.x * vec2.z) - (vec1.z * vec2.x));
    temp.z = ((vec1.x * vec2.y) - (vec1.y * vec2.x));
    
    return temp;
}

/*******************************************************************************
* computes and returns the distance between two vectors
*******************************************************************************/
double Vec::distance(Vec vec1, Vec vec2){
    return (sqrt(pow(vec2.x - vec1.x, 2) + pow(vec2.y - vec1.y, 2) + pow(vec2.z - vec1.z, 2)));
}

/*******************************************************************************
* combine vectors
*******************************************************************************/
Vec Vec::combineVectors(Vec vec1, Vec vec2){
    Vec temp;
    
    temp.x = (vec2.x - vec1.x);
    temp.y = (vec2.y - vec1.y);
    temp.z = (vec2.z - vec1.z);
    
    return temp;
}

/*******************************************************************************
* Scalar projection of vector b onto vector a
*******************************************************************************/
double Vec::compBA(Vec a, Vec b){
    return (dotProduct(a,b) / a.getLength());
}

/*******************************************************************************
* Vector projection of vector b on to vector a
*******************************************************************************/
Vec Vec::projBA(Vec a, Vec b){
    Vec temp;
    
    //stuff
    
    return temp;
}

/*******************************************************************************
*
*******************************************************************************/

/*******************************************************************************
*
*******************************************************************************/

/*******************************************************************************
* print the content of a vector
*******************************************************************************/
void Vec::printVectorInfo(){
    cout << "\tVector info\n*************************************************\n";
    cout << "* vector components: <" << getX() << ", " << getY() << ", " << getZ() << ">\n";
    cout << "* vector length    : " << getLength() << "\n";
    cout << "* vector size      : " << getSize() << "\n";
    cout << "*************************************************\n" << "\n";
}