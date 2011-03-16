#ifndef DEMVISITOR_H
#define DEMVISITOR_H

#include "Visitor.h"

#include <GL/gl.h>

#include <iosfwd>

#include <stdint.h>

class DEM;
class Cell;

class DEMVisitor : public Visitor {
  struct Color {
    GLbyte mRedColorByte;
    GLbyte mGreenColorByte;
    GLbyte mBlueColorByte;
  };

  friend std::ostream& operator << (std::ostream& stream,
    const DEMVisitor& obj);
  friend std::istream& operator >> (std::istream& stream,
    DEMVisitor& obj);
  friend std::ofstream& operator << (std::ofstream& stream,
    const DEMVisitor& obj);
  friend std::ifstream& operator >> (std::ifstream& stream,
    DEMVisitor& obj);

  DEMVisitor(const DEMVisitor& other);
  DEMVisitor& operator = (const DEMVisitor& other);

  virtual void read(std::istream& stream);
  virtual void write(std::ostream& stream) const;
  virtual void read(std::ifstream& stream);
  virtual void write(std::ofstream& stream) const;

public:
  DEMVisitor();
  ~DEMVisitor();

  void visit(const DEM* dem);
  void visit(const Cell* cell) const;

protected:

};

#endif // DEMVISITOR_H
