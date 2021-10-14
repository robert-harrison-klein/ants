#ifndef ANTS_MODEL_ANT_STRATEGY_HPP
#define ANTS_MODEL_ANT_STRATEGY_HPP

#include "model/phermone.hpp"
#include "model/resource.hpp"
#include "model/vector.hpp"

#include <map>

namespace ants {
namespace model {

/**
 * An AntStrategy represents a general behavior pattern for an Ant.
 *
 * An AntStrategy controls the movement, emitted phermones, and resource
 * gathering, consumption, and deposition of an Ant.
 *
 * @see ants::model::Ant
 */
class AntStrategy {
public:
  /**
   * Initialize an AntStrategy.
   */
  AntStrategy(){};

  /**
   * Destory an AntStrategy.
   */
  virtual ~AntStrategy(){};

  /**
   * Update the location, phermones, and resources of an Ant.
   *
   * @param deltatime The amount of time that has elapsed.
   * @param emitted_phermones A reference to the emitted phermones of the ant.
   * @param resources A reference to the resource of the ant.
   * @param location A reference to the location of the ant.
   * @param velocity A reference to the velocity of the ant.
   * @param acceleration A reference to the acceleration of the ant.
   */
  virtual void update(double deltatime,
                      std::map<Phermone, double> &emitted_phermones,
                      std::map<Resource, double> &resources,
                      Vector2<double> &location, Vector2<double> &velocity,
                      Vector2<double> &acceleration) = 0;
};

} // namespace model
} // namespace ants

#endif // ANTS_MODEL_ANT_STRATEGY_HPP
