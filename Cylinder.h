#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
public:
    
    //Constuctor and Destructor
    Cylinder();
    ~Cylinder();
    
    //Setters
    void setRadius(double r);
    void setHeight(double h);
    //Getters
    double getRadius();
    double getHeight();
    double calculateVolume();
    double calculateSurfaceArea();
    
private:
    double radius;
    double height;
    double pi = 3.14159;
};

#endif // !CYLINDER_H
