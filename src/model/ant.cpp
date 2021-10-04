#include "model/ant.hpp"
#include "model/vector.hpp"

namespace ants {
namespace model {

std::map<Phermone, double> Ant::get_phermones() const {
  return emitted_phermones_;
}

void Ant::update_location(double deltatime) {
  location_ += velocity_ * deltatime;
}

void Ant::update_velocity(double deltatime) {
  velocity_ += acceleration_ * deltatime;
}

} // namespace model
} // namespace ants
