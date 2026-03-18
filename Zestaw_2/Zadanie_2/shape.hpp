#pragma once

class Shape {
protected:
  long int _x; 
  long int _y;
public:
  Shape(long int x, long int y) : _x(x), _y(y) {};

  long int get_x() const {return _x;}
  long int get_y() const {return _y;}

  virtual void draw() = 0;

  virtual ~Shape() {};
};