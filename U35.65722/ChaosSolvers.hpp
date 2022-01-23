#ifndef UE4SS_SDK_ChaosSolvers_HPP
#define UE4SS_SDK_ChaosSolvers_HPP

struct FSolverCollisionFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinImpulse;
};

struct FSolverBreakingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
};

struct FSolverTrailingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;
};

#endif
