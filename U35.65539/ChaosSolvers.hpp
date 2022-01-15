#ifndef UE4SS_SDK_ChaosSolvers_HPP
#define UE4SS_SDK_ChaosSolvers_HPP

struct FSolverBreakingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
}

struct FSolverCollisionFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
}

struct FSolverTrailingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
}

#endif
