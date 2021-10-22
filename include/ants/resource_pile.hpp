#ifndef ANTS_RESOURCE_PILE_HPP
#define ANTS_RESOURCE_PILE_HPP

#include "ants/resource.hpp"
#include "ants/vector.hpp"

namespace ants {

/**
 * A ResourcePile represents a pile of resources.
 *
 * A pile of resources consists of a type of resource, a location, and an amount
 * of that resource that is available. A pile of resources can be harvested
 * from.
 *
 * @see ants::Resource
 */
class ResourcePile {
public:
  /**
   * Initialize a ResourcePile.
   *
   * @param location the location of this resource pile.
   * @param amount the amount of resource in this pile.
   * @param resource the type of resource in this pile.
   */
  ResourcePile(Vector2<double> location, double amount, Resource resource);

  /**
   * Determine the amount of resources remaining in this pile
   *
   * @return the amount of resources in this pile.
   */
  double get_amount();

  /**
   * Harvest resources from this pile.
   *
   * @param amount the amount of resources to harvest from this pile.
   *
   * @throw std::invalid_argument if amount is greater than the remaining amount
   * of resources.
   */
  void harvest(double amount);

private:
  const Vector2<double> location_;
  double amount_;
};

} // namespace ants

#endif // ANTS_RESOURCE_PILE_HPP
