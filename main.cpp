#include <iostream>
#include "sculptor.hpp"

int main() {
  Sculptor s(50,20,20);

  s.setColor(1.0,0.0,0.0,1.0);
  s.putVoxel(0,0,0);

  s.setColor(0,1,0,1);
  s.putBox(2,4,0,4,0,4);
  s.cutBox(3,4,0,4,0,4);

  s.setColor(0,0,1,1);
  s.putSphere(10,5,5,5);
  s.cutSphere(13,5,5,2);

  s.setColor(1,1,0,1);
  s.putEllipsoid(25,5,5,6,4,4);
  s.cutEllipsoid(27,5,5,5,3,3);

  s.writeOFF("funcao-teste.off");
  
  return 0;
}