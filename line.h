/**
 * SVG Line
 **/

#ifndef Line_H
#define Line_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Line : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &in) override;

private:
  // coordinates for the start of line
  int x1{0}, y1{0};

  // rcoordinates for the end of the line
  int x2{0}, y2{0};

  // color of the line
  string color{"black"};
};

#endif
