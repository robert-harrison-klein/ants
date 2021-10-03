#ifndef ANT_H
#define ANT_H

#include "model/vector.hpp"

namespace Ants {
namespace Model {

class Ant {
public:
  Ant();
  virtual ~Ant();

  virtual void update(double deltatime) = 0;

protected:
  void update_location(double deltatime);
  void update_velocity(double deltatime);

private:
  Vector2<double> location_;
  Vector2<double> velocity_;
  Vector2<double> acceleration_;
};

} // namespace Model
} // namespace Ants

#endif // ANT_H
