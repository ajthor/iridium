#ifndef POSITION_H
#define POSITION_H

class Position {
  UniqueID SceneID;
  unsigned float A; // Yaw
  unsigned float B; // Pitch
  unsigned float C; // Roll
  unsigned float X;
  unsigned float Y;
  unsigned float Z;

  // Functions for moving in each direction and rotating.
  void MoveX(float X);
  void MoveY(float Y);
  void MoveZ(float Z);
  void CartesianMove(float X, float Y, float Z);

  void MoveA(float A);
  void MoveB(float B);
  void MoveC(float C);
  void Rotate(float A, float B, float C);

};

#endif
