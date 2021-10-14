#include "model/ant.hpp"

#include "model/phermone.hpp"
#include "model/resource.hpp"
#include "model/vector.hpp"

namespace ants {
namespace model {

Vector2<double> Ant::get_location() const { return location_; }

std::map<Phermone, double> Ant::get_phermones() const {
  return emitted_phermones_;
}

std::map<Resource, double> Ant::get_resources() const { return resources_; }

} // namespace model
} // namespace ants
