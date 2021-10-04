#ifndef ANTS_MODEL_SCAVENGER_ANT_H
#define ANTS_MODEL_SCAVENGER_ANT_H

#include "model/ant.hpp"
#include "model/vector.hpp"

namespace Ants {
namespace Model {

class ScavengerAnt : public Ant {
public:
  ScavengerAnt();
  ~ScavengerAnt() override;

  void update(double deltatime) override;
};

} // namespace Model
} // namespace Ants

#endif // ANTS_MODEL_SCAVENGER_ANT_H
