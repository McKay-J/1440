//
// Created by Stephen Clyde on 2/3/17.
//

#include "TriangleTester.h"

#include <iostream>
#include <cmath>

#include "../Triangle.h"
#include "../Utils.h"

void TriangleTester::testFirstConstructor()
{
    std::cout << "Execute TriangleTester::testConstructorWithStrings" << std::endl;

    Point** points = new Point*[3];
    points[0] = new Point(1,2,8);
    points[1] = new Point(3,1,4);
    points[2] = new Point(6,4,3);

    Triangle t(points);
    if (!t.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t.getTriangleType()!='S')
    {
        std::cout << "Triangle: unexpected type of "
                 << t.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t.computerArea(), 9.35414, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                 << t.computerArea() << std::endl;
        return;
    }

    const Point* p = t.getPoint(0);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 0 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=1 || p->getY()!=2 || p->getZ()!=8)
    {
        std::cout << "Point 0 of triangle is not as expected, namely (1,2,8)" << std::endl;
        return;
    }

    p = t.getPoint(1);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 1 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=3 || p->getY()!=1 || p->getZ()!=4)
    {
        std::cout << "Point 1 of triangle is not as expected, namely (3,1,4)" << std::endl;
        return;
    }

    p = t.getPoint(2);
    if (p== nullptr)
    {
        std::cout << "Failure to get point 1 from triangle" << std::endl;
        return;
    }

    if (p->getX()!=6 || p->getY()!=4 || p->getZ()!=3)
    {
        std::cout << "Point 2 of triangle is not as expected, namely (6,4,3)" << std::endl;
        return;
    }
}

void TriangleTester::testSecondConstructor()
{
    std::cout << "Execute TriangleTester::testSecondConstructor" << std::endl;

    // TODO: Write representative test cases for the Triangle's second constructor

    std::string points = "1,2,8|3,1,4|6,4,3";
    Triangle t(points);
    if(!t.isValid())
    {
        std::cout << "Failure to make a triangle from 3 points" << std::endl;
        return;
    }

    if(!t.isTriangle())
    {
        std::cout << "Failure to make a triangle from 3 points" << std::endl;
        return;
    }

    if(t.getTriangleType() !='S')
    {
        std::cout << "Unexpected type of " << t.getTriangleType() << std::endl;
        return;
    }

    if(!approximatelyEquals(t.computerArea(),9.35414, 0.001))
    {
        std::cout << "Unexpected area of " << t.computerArea() << std::endl;
        return;
    }

    const Point* p = t.getPoint(0);

    if(p == nullptr)
    {
        std::cout << "Failure to get 0 from triangle" << std::endl;
        return;
    }

    if(p->getX() !=1 || p->getY() !=2 || p->getZ() !=8)
    {
        std::cout << "Point 0 of the triangle was not as expected. (1,2,8)" << std::endl;
        return;
    }

    p = t.getPoint(1);
    if(p == nullptr)
    {
        std::cout << "Failure to get point 1 from the triangle" << std::endl;
        return;
    }


    if(p->getX() !=3 || p->getY() !=1 || p->getZ() !=4)
    {
        std::cout << "Point 0 of the triangle was not as expected. (3,1,4)" << std::endl;
        return;
    }

    p = t.getPoint(2);
    if(p == nullptr)
    {
        std::cout << "Failure to get point 1 from the triangle" << std::endl;
        return;
    }


    if(p->getX() !=6 || p->getY() !=4 || p->getZ() !=3)
    {
        std::cout << "Point 0 of the triangle was not as expected. (6,4,3)" << std::endl;
        return;
    }
}

void TriangleTester::testEquilateralTriangles()
{
    std::cout << "Execute TriangleTester::testEquilateralTriangles" << std::endl;

    std::string triangleStr = "-10,0,0|10,0,0|0,17.32050808,0";
    Triangle t1(triangleStr);
    if (!t1.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t1.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t1.getTriangleType()!='E')
    {
        std::cout << "Triangle: unexpected type of "
                 << t1.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t1.computerArea(), 173.205, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                 << t1.computerArea() << std::endl;
        return;
    }

    // TODO: Write additional representative test cases equilateral triangles
}

void TriangleTester::testIsoscelesTriangles()
{
    std::cout << "Execute TriangleTester::testIsoscelesTriangles" << std::endl;

    // TODO: Write representative test cases isosceles triangles



    std::string triangleStr = "-10,0,0|10,0,0|0,33,0";
    Triangle t1(triangleStr);
    if (!t1.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t1.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t1.getTriangleType()!='I')
    {
        std::cout << "Triangle: unexpected type of "
                  << t1.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t1.computerArea(), 330, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                  << t1.computerArea() << std::endl;
        return;
    }

}

void TriangleTester::testScaleneTriangles()
{
    std::cout << "Execute TriangleTester::testScaleneTriangles" << std::endl;

    // TODO: Write representative test cases scalene triangles

    std::string triangleStr = "2.3,5.25,35|12.25,2.4,40|12,8.3,3.2";
    Triangle t1(triangleStr);
    if (!t1.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (!t1.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (!t1.getTriangleType()=='S')
    {
        std::cout << "Triangle: unexpected type of "
                  << t1.getTriangleType() << std::endl;
        return;
    }

    if (!approximatelyEquals(t1.computerArea(), 188.55, 0.001))
    {
        std::cout << "Triangle: unexpected area of "
                  << t1.computerArea() << std::endl;
        return;
    }

}

void TriangleTester::testNonTriangles()
{
    std::cout << "Execute TriangleTester::testNonTriangles" << std::endl;

    // TODO: Write representative test cases non-triangles triangles
    std::string triangleStr = "10,0,0|10,0,0|0,33,0";
    Triangle t2(triangleStr);
    if (!t2.isValid())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (t2.isTriangle())
    {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t2.getTriangleType()!='N')
    {
        std::cout << "Triangle: unexpected type of "
                  << t2.getTriangleType() << std::endl;
        return;
    }


}

void TriangleTester::testInvalid() {
    std::cout << "Execute TriangleTester::testInvalid" << std::endl;

    // TODO: Write representative test cases invalid triangles

    std::string triangleStr = "10,0,0|10,b,0|0,33,0";
    Triangle t2(triangleStr);
    if (!t2.isValid()) {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly invalid" << std::endl;
        return;
    }

    if (t2.isTriangle()) {
        std::cout << "Failure to constructor a triangle from 3 points; unexpectedly not a triangle" << std::endl;
        return;
    }

    if (t2.getTriangleType() != 'N') {
        std::cout << "Triangle: unexpected type of "
                  << t2.getTriangleType() << std::endl;
        return;
    }
}