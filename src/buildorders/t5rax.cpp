/*
 * Copyright (c) 2017-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "base.h"

namespace cherrypi {

class ABBOt5rax : public ABBOBase {
 public:
  using ABBOBase::ABBOBase;

  virtual void preBuild2(autobuild::BuildState& st) override {
    using namespace buildtypes;
    using namespace autobuild;

    postBlackboardKey(Blackboard::kMinScoutFrameKey, 24 * 60 * 2);
  }

  virtual void buildStep2(autobuild::BuildState& st) override {
    using namespace buildtypes;
    using namespace autobuild;

    buildN(Terran_Barracks, 5);
    buildN(Terran_SCV, 18);
    build(Terran_Marine);
    buildN(Terran_Supply_Depot, 1);
    buildN(Terran_SCV, 9);
    buildN(Terran_Barracks, 2);
    buildN(Terran_SCV, 8);
  }
};

REGISTER_SUBCLASS_3(ABBOBase, ABBOt5rax, UpcId, State*, Module*);
}
