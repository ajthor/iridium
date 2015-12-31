#ifndef UNIQUEID_H
#define UNIQUEID_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>

enum IDType {
  OBJECT,
  ITEM,
  BUILDING,
  ENVIRONMENT,
  SCENE
};

struct UniqueID {
  IDType Type;
  int Classifier;
  unsigned long Number;

  UniqueID(type, classifier): Type(type), Classifier(classifier) {
    srand(time(NULL));
    Number = rand();
  };
}

#endif
