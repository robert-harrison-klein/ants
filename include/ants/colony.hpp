#ifndef ANTS_COLONY_HPP
#define ANTS_COLONY_HPP

#include "ants/ant.hpp"

#include <list>
#include <memory>

namespace ants {

/**
 * A Colony represents a collection of ants.
 *
 * A Colony exists in a location in space and has a finite number of ants
 * associated with it.
 */
class Colony {
public:
  /**
   * Initialize a Colony.
   *
   * @param location the location of the colony.
   * @param size the number of ants in the colony.
   */
  Colony(Vector2<double> location, unsigned int size);

private:
  const Vector2<double> location_;

  std::list<std::unique_ptr<Ant>> ants_;
};

} // namespace ants

#endif // ANTS_COLONY_HPP
