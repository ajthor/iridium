#include <stdlib.h>     /* srand, rand */
#include <time.h>

#include "uniqueid.h"

UniqueID::UniqueID(type, classifier) {
  Type = type;
  Classifier = classifier;

  srand(time(NULL));
  Number = rand();
};

unsigned long UniqueID::GetUniqueID() {
  return UniqueID;
}
