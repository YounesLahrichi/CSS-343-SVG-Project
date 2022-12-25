/**
 * SVG Rectangle
 **/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:

  // Width of Rectangle
  int width{0};

  //Height of the Rectangle
  int height{0};

  // center of the rectangle
  int x{0}, y{0};
  
  // color of Rectangle
  string color{"black"};
};

#endif
