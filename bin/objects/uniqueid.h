#ifndef UNIQUEID_H
#define UNIQUEID_H

enum IDType {
  OBJECT,
  ITEM,
  BUILDING,
  ENVIRONMENT,
  SCENE
};

class UniqueID {
public:
  // Type represents the overall type of the object, which will more closely
  // resemble the class of the object than its classifier.
  IDType Type;

  // The classifier is the binary or hexadecimal number which gives us its
  // characteristics and behavior information.
  int Classifier;

  // Constructor
  UniqueID(type, classifier);

  // Accessors
  unsigned long GetUniqueID();

private:
  // This is the actual unique number assigned to this object.
  unsigned long Number;

}

#endif
