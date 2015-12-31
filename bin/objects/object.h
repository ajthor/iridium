#ifndef OBJECT_H
#define OBJECT_H

class Object {
public:
  // The position of the object on the scene.
  Position position;
  // The unique identifying number and type for this object.
  UniqueID ID;

  virtual void Render();

private:

};

#endif
