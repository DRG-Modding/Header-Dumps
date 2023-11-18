#ifndef UE4SS_SDK_BP_PlagueMeteorTimer_HPP
#define UE4SS_SDK_BP_PlagueMeteorTimer_HPP

class ABP_PlagueMeteorTimer_C : public ABP_EventSpawnTimer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundBase* WarningSound;

    FTransform GetSpawnTransform();
    void PreEventSpawn();
    void All_PlayWarningSound();
    void ExecuteUbergraph_BP_PlagueMeteorTimer(int32 EntryPoint);
};

#endif
