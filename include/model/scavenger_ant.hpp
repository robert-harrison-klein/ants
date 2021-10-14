#ifndef ANTS_MODEL_SCAVENGER_ANT_HPP
#define ANTS_MODEL_SCAVENGER_ANT_HPP

#include "model/ant.hpp"
#include "model/vector.hpp"

#include <map>

namespace ants {
namespace model {

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

protected:
  AntStrategy *strategy_;

  Vector2<double> location_;
  Vector2<double> velocity_;
  Vector2<double> acceleration_;

  std::map<Phermone, double> emitted_phermones_;
  std::map<Resource, double> resources_;
};

} // namespace model
} // namespace ants

#endif // ANTS_MODEL_SCAVENGER_ANT_HPP
