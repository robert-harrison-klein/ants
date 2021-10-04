#ifndef ANTS_MODEL_ANT_H
#define ANTS_MODEL_ANT_H

#include "model/phermone.hpp"
#include "model/vector.hpp"

#include <map>

namespace ants {
namespace model {

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

  std::map<Phermone, double> emitted_phermones_;
};

} // namespace model
} // namespace ants

#endif // ANTS_MODEL_ANT_H
