//
// Created by Stephen Clyde on 2/3/17.
//

#include "EdgeTester.h"

#include <iostream>
#include <cmath>
#include "../Point.h"
#include "../Edge.h"

void EdgeTester::testEdge01()
{
    std::cout << "Execute EdgeTester::testEdge01" << std::endl;

    Point p0(0,0,0);
    Point p1(1,0,0);

    // Create and test a edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (e.getLength()!=1)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 1)"
                  << std::endl;
        return;
    }

    if (e.getSlopeX()!=INFINITY)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting INFINITY)"
                  << std::endl;
        return;
    }

    if (e.getSlopeY()!=0)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0)"
                  << std::endl;
        return;
    }

    if (e.getSlopeZ()!=0)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 0)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testEdge02()
{
    std::cout << "Execute EdgeTester::testEdge02" << std::endl;

    Point p0(1,0,0);
    Point p1(3,4,5);

    // Create and test a edge between p0 and p1, then test all characteristics of that edge
    Edge e(&p0, &p1);
    if (!e.isValid() || e.getPoint1() != &p0 || e.getPoint2()!= &p1)
    {
        std::cout << "Failure in constructing Edge(&p1, &p2) isValid()="
                  << e.isValid()
                  << " point1=" << e.getPoint1() << " (expecting " << &p0 << ")"
                  << " point2=" << e.getPoint2() << " (expecting " << &p1 << ")"
                  << std::endl;
        return;
    }

    if (fabs(e.getLength() - 6.708203932) > 0.001)
    {
        std::cout << "Failure in e.getLenth(), length="
                  << e.getLength() << " (expecting 6.708203932)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeX() - 0.312347524) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeX(), slope="
                  << e.getSlopeX() << " (expecting 0.312347524)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeY() - 0.742781353) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeY(), slope="
                  << e.getSlopeY() << " (expecting 0.742781353)"
                  << std::endl;
        return;
    }

    if (fabs(e.getSlopeZ() - 1.118033989) >= 0.001)
    {
        std::cout << "Failure in e.getSlopeZ(), slope="
                  << e.getSlopeZ() << " (expecting 1.118033989)"
                  << std::endl;
        return;
    }
}

void EdgeTester::testParallelEdges()
{
    std::cout << "Execute EdgeTester::testParallelEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges that are parallel with other
    Point p0(2,4,6);
    Point p1(4,8,12);
    Edge e1(&p0, &p1);

    Point p2(4,8,12);
    Point p3(8,16,24);
    Edge e2(&p2, &p3);

    if(!e1.isParallelTo(e2))
    {
        std::cout << "cFailure Testing parallel e1 and e2" << std::endl;
    }


    Point p4(2.0001,4.0002,6.0003);
    Point p5(4.0002,8.0004,12.0006);
    Edge e3(&p4, &p5);

    Point p6(4.0001,8.0002,12.0003);
    Point p7(8.0002,16.0004,24.0006);
    Edge e4(&p6, &p7);

    if(!e3.isParallelTo(e4))
    {
        std::cout << "aFailure Testing parallel e3 and e4" << std::endl;
    }


    Point q0("2,4,6");
    Point q1("4,8,12");
    Edge ed1(&q0, &q1);

    Point q2("4,8,12");
    Point q3("8,16,24");
    Edge ed2(&q2, &q3);

    if(!ed1.isParallelTo(ed2))
    {
        std::cout << "Failure 2Testing parallel e1 and e2" << std::endl;
    }
}


void EdgeTester::testNonParallelEdges()
{
    std::cout << "Execute EdgeTester::testNonParallelEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges that are not parallel with other

    Point p0(2,4,0);
    Point p1(4,8,3);
    Edge e1(&p0, &p1);

    Point p2(4,8,7);
    Point p3(8,16,1);
    Edge e2(&p2, &p3);

    if(e1.isParallelTo(e2))
    {
        std::cout << "Failure: e1 and e2 are Parallel" << std::endl;
    }


    Point p4(2.0001,4.0002,6.0003);
    Point p5(4.0002,6.0004,12.0006);
    Edge e3(&p4, &p5);

    Point p6(1.0001,8.0001,13.0001);
    Point p7(9.0201,16.0001,4.0006);
    Edge e4(&p6, &p7);

    if(e3.isParallelTo(e4))
    {
        std::cout << "Failure: Edges e3 and e4 are parallel" << std::endl;
    }


    Point q0("2,1,6");
    Point q1("5,8,12");
    Edge ed1(&q0, &q1);

    Point q2("1,8,2");
    Point q3("8,16,4");
    Edge ed2(&q2, &q3);

    if(ed1.isParallelTo(ed2))
    {
        std::cout << "Failure: Edges e1 and e2 are parallel" << std::endl;
    }

}

void EdgeTester::testNonLengthEdges()
{
    std::cout << "Execute EdgeTester::testNonLengthEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges have a length of zero or approximately zero

    Point p0(1,1,1);
    Point p1(1,1,1);
    Edge e1(&p0, &p1);

    if(!e1.getLength() == 0)
    {
        std::cout << "Failed testNonLengthEdges() e2" << std::endl;
    }

    Point p2(1,1,1);
    Point p3(1.00001,1.00001,1.00001);
    Edge e2(&p2, &p3);
    if((!e2.getLength()) == 0)
    {
        std::cout << "Failed testNonLengthEdges() e2 " << std::endl;
    }

}

void EdgeTester::testBadEdges()
{
    std::cout << "Execute EdgeTester::testBadEdges" << std::endl;

    // TODO: Writing a representative set of test cases for edges not formed correctly
    Point p0(1,1,1);
    Point p1(1,1,1);
    Edge e1(&p0, &p1);

    if(!e1.isValid())
    {
        std::cout << "Failed testNonLengthEdges() e2" << std::endl;
    }
}
