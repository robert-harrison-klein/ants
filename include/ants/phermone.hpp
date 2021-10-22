#ifndef ANTS_PHERMONE_HPP
#define ANTS_PHERMONE_HPP

namespace ants {

/**
 * A Phermone represents a Phermone that can be emitted or sensed by an Ant.
 */
enum class Phermone {
  /// Indicates the presence of the colony.
  kColony,
  /// Indicates the path that an ant has previously taken.
  /// Can be used by other ants to form a trail.
  kTrail,
  /// Indicates the presence of food.
  kFood,
};

} // namespace ants

#endif // ANTS_PHERMONE_HPP
