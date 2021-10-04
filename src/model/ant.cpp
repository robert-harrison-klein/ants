#include "model/ant.hpp"

namespace Ants {
namespace Model {

void Ant::update_location(double deltatime) {
  location_ += velocity_ * deltatime;
}

void Ant::update_velocity(double deltatime) {
  velocity_ += acceleration_ * deltatime;
}

} // namespace Model
} // namespace Ants
