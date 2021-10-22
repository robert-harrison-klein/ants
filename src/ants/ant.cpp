#include "ants/ant.hpp"

#include "ants/phermone.hpp"
#include "ants/resource.hpp"
#include "ants/vector.hpp"

namespace ants {

Vector2<double> Ant::get_location() const { return location_; }

std::map<Phermone, double> Ant::get_phermones() const {
  return emitted_phermones_;
}

std::map<Resource, double> Ant::get_resources() const { return resources_; }

} // namespace ants
