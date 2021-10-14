#ifndef ANTS_MODEL_ANT_HPP
#define ANTS_MODEL_ANT_HPP

#include "model/ant_strategy.hpp"
#include "model/phermone.hpp"
#include "model/resource.hpp"
#include "model/vector.hpp"

#include <map>

namespace ants {
namespace model {

/**
 * An Ant represents an interface for defining an Ant.
 *
 * Ants emit phermones to communicate to other nearby ants. Based on the emitted
 * phermones that an ant can detect, the ant may decide to change its behavior,
 * parameterized by its strategy. Furthermore, ants may harvest and deposit
 * resources that they locate.
 *
 * @see ants::model::Phermone
 * @see ants::model::Resource
 * @see ants::model::AntStrategy
 */
class Ant {
public:
  /**
   * Initialize an Ant.
   */
  Ant(){};

  /**
   * Destroy an Ant.
   */
  virtual ~Ant(){};

  /**
   * Update an Ant.
   *
   * Updates the ant's location, emitted phermones, and resources.
   *
   * @param deltatime The amount of time that has elapsed.
   */
  virtual void update(double deltatime) = 0;

  /**
   * Get an Ant's location.
   *
   * @see ants::model::vector
   *
   * @return the location of the ant.
   */
  virtual Vector2<double> get_location() const;

  /**
   * Get the Phermones that an Ant is emitting, along with their strength.
   *
   * @see ants::model::Phermone
   *
   * @return a map from a phermone to an emission strength.
   */
  virtual std::map<Phermone, double> get_phermones() const;

  /**
   * Get the resources that an Ant is carrying, along with the amount.
   *
   * @see ants::model::Resource
   *
   * @return a map from a resource to an amount.
   */
  virtual std::map<Resource, double> get_resources() const;

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

#endif // ANTS_MODEL_ANT_HPP
