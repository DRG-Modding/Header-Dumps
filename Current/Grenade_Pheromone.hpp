#ifndef UE4SS_SDK_Grenade_Pheromone_HPP
#define UE4SS_SDK_Grenade_Pheromone_HPP

class AGrenade_Pheromone_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class AFSDPawn*> PheromoneTargets;
    int32 MinGuaranteedTargets;
    int32 AffectEveryNthTarget;
    float EffectRadius;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void OnExploded();
    void ApplyPheromones();
    void ExecuteUbergraph_Grenade_Pheromone(int32 EntryPoint);
};

#endif
