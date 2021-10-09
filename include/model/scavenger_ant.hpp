#ifndef ANTS_MODEL_SCAVENGER_ANT_H
#define ANTS_MODEL_SCAVENGER_ANT_H

#include "model/ant.hpp"
#include "model/vector.hpp"

namespace ants {
namespace model {

class ScavengerAnt : public Ant {
public:
  ScavengerAnt();
  virtual ~ScavengerAnt() override;

  virtual void update(double deltatime) override;
};

} // namespace model
} // namespace ants

#endif // ANTS_MODEL_SCAVENGER_ANT_H
