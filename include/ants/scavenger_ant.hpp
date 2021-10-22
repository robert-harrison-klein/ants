#ifndef ANTS_SCAVENGER_ANT_HPP
#define ANTS_SCAVENGER_ANT_HPP

#include "ants/ant.hpp"
#include "ants/vector.hpp"

#include <map>

namespace ants {

/**
 * A ScavengerAnt represents an Ant charged with locating food.
 *
 * A ScavengerAnt locates food and transports food back to the colony.
 * Additionally, a ScavengerAnt will emit phermones to indicate the location of
 * food to other ants.
 */
class ScavengerAnt : public Ant {
public:
  /**
   * Initialize a ScavengerAnt
   */
  ScavengerAnt();

  /**
   * Update a ScavengerAnt.
   *
   * Updates the ant's location emitted phermones and resources.
   *
   * @param deltatime The amount of time that has elapsed.
   */
  virtual void update(double deltatime) override;
};

} // namespace ants

#endif // ANTS_SCAVENGER_ANT_HPP
