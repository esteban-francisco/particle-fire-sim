#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Config.h"

namespace EighteenTwelve {

class Particle {
private:
    double x;
    double y;
    double speed;
    double direction;

private:
    void init();

public:
    Particle();
    ~Particle();
    void update(int intervalTime);
    double getX();
    double getY();
};

} // namespace EighteenTwelve

#endif // PARTICLE_H_