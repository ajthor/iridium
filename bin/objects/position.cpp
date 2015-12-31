#include "uniqueid.h"

#include "position.h"

// Functions for moving in each direction and rotating.
void Position::MoveX(float relX) {
  X += relX;
}
void Position::MoveY(float relY) {
  Y += relY;
}
void Position::MoveZ(float relZ) {
  Z += relZ;
}
void Position::CartesianMove(float relX, float relY, float relZ) {
  X += relX;
  Y += relY;
  Z += relZ;
}

void Position::MoveA(float relA) {
  A += relA;
}
void Position::MoveB(float relB) {
  B += relB;
}
void Position::MoveC(float relC) {
  C += relC;
}
void Position::Rotate(float relA, float relB, float relC) {
  A += relA;
  B += relB;
  C += relC;
}
