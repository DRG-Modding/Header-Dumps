#ifndef UE4SS_SDK_BP_EscortGem_Heartstone_HPP
#define UE4SS_SDK_BP_EscortGem_Heartstone_HPP

class ABP_EscortGem_Heartstone_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* HeartStoneGemIdle;
    class UParticleSystemComponent* P_OmoranHeartStoneMagic_01;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_0B9A7E48466E6979BF52FEBAB3551DF1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0B9A7E48466E6979BF52FEBAB3551DF1;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_EscortGem_Heartstone(int32 EntryPoint);
};

#endif
