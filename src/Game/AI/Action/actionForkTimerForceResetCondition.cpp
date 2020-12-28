#include "Game/AI/Action/actionForkTimerForceResetCondition.h"

namespace uking::action {

ForkTimerForceResetCondition::ForkTimerForceResetCondition(const InitArg& arg) : ForkTimer(arg) {}

ForkTimerForceResetCondition::~ForkTimerForceResetCondition() = default;

bool ForkTimerForceResetCondition::init_(sead::Heap* heap) {
    return ForkTimerBase::init_(heap);  // NOLINT(bugprone-parent-virtual-call)
}

void ForkTimerForceResetCondition::enter_(ksys::act::ai::InlineParamPack* params) {
    ForkTimer::enter_(params);
}

void ForkTimerForceResetCondition::leave_() {
    ForkTimerBase::leave_();  // NOLINT(bugprone-parent-virtual-call)
}

void ForkTimerForceResetCondition::loadParams_() {
    ForkTimer::loadParams_();
    getStaticParam(&mResetCondition_s, "ResetCondition");
}

void ForkTimerForceResetCondition::calc_() {
    ForkTimer::calc_();
}

}  // namespace uking::action
