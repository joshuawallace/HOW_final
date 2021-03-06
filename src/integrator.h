#ifndef INTEGRATOR_H_
#define INTEGRATOR_H_

#include "particle.h"

class Integrator {
 public:
  virtual ~Integrator() {}
  virtual int step(double dt, const Particles& particles) = 0;
};


#endif  //INTEGRATOR_H_
