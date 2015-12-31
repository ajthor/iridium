#ifndef OBJECT_H
#define OBJECT_H

#include "position.h"
#include "uniqueid.h"

class Object {
public:
  // The position of the object on the scene.
  Position position;
  // The unique identifying number and type for this object.
  UniqueID ID;

  void Render();

private:

};

#endif
