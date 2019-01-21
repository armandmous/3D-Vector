/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vec.h
 * Author: arman
 *
 * Created on October 28, 2018, 10:29 PM
 */
#ifndef VEC_H
#define VEC_H

class Vec {
private:
    double x, y, z;
    double size;
    double length;
    
public:
    // default constructor
    Vec(){
        x, y, z = 0;
    }
    
    // Constructor
    Vec(double X, double Y, double Z){
        x = X;
        y = Y;
        z = Z;
    }
    
    // Mutators
    void setXYZ(double X, double Y, double Z){
        x = X;
        y = Y;
        z = Z;
    }
    void setX(double X){
        x = X;
    }
    void setY(double Y){
        y = Y;
    }
    void setZ(double Z){
        z = Z;
    }
    
    // Accessors
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getZ(){
        return z;
    }
    
    double getSize(){
        return 3;
    }
    double getLength();
    
    // Display functions
    void printVectorInfo();
    
    // Overload operators
    Vec operator * (const Vec &);
    Vec operator + (const Vec &);
    Vec operator - (const Vec &);
    Vec operator / (const Vec &);
};

#endif /* VEC_H */