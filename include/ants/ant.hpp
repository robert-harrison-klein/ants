#ifndef ANTS_ANT_HPP
#define ANTS_ANT_HPP

#include "ants/ant_strategy.hpp"
#include "ants/phermone.hpp"
#include "ants/resource.hpp"
#include "ants/vector.hpp"

#include <map>
#include <memory>

namespace ants {

/**
 * An Ant represents an interface for defining an Ant.
 *
 * Ants emit phermones to communicate to other nearby ants. Based on the emitted
 * phermones that an ant can detect, the ant may decide to change its behavior,
 * parameterized by its strategy. Furthermore, ants may harvest and deposit
 * resources that they locate.
 *
 * @see ants::Phermone
 * @see ants::Resource
 * @see ants::AntStrategy
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
   * @see ants::vector
   *
   * @return the location of the ant.
   */
  virtual Vector2<double> get_location() const;

  /**
   * Get the Phermones that an Ant is emitting, along with their strength.
   *
   * @see ants::Phermone
   *
   * @return a map from a phermone to an emission strength.
   */
  virtual std::map<Phermone, double> get_phermones() const;

  /**
   * Get the resources that an Ant is carrying, along with the amount.
   *
   * @see ants::Resource
   *
   * @return a map from a resource to an amount.
   */
  virtual std::map<Resource, double> get_resources() const;

protected:
  std::unique_ptr<AntStrategy> strategy_;

  Vector2<double> location_;
  Vector2<double> velocity_;
  Vector2<double> acceleration_;

  std::map<Phermone, double> emitted_phermones_;
  std::map<Resource, double> resources_;
};

} // namespace ants

#endif // ANTS_ANT_HPP
