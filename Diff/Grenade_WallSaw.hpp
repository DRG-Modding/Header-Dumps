#ifndef UE4SS_SDK_Grenade_WallSaw_HPP
#define UE4SS_SDK_Grenade_WallSaw_HPP

class AGrenade_WallSaw_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FVector InitialDirection;
    TSubclassOf<class ABP_WallSaw_C> WallSawSpawnable;

    void GetDurationBeforeExpiration(float& Duration);
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void OnExploded();
    void ExecuteUbergraph_Grenade_WallSaw(int32 EntryPoint);
};

#endif
