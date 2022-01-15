#ifndef UE4SS_SDK_ChaosSolvers_HPP
#define UE4SS_SDK_ChaosSolvers_HPP

struct USolverBreakingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
}

struct USolverCollisionFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
}

struct USolverTrailingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
}

#endif
