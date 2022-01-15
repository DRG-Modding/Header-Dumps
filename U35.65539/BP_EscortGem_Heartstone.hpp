#ifndef UE4SS_SDK_BP_EscortGem_Heartstone_HPP
#define UE4SS_SDK_BP_EscortGem_Heartstone_HPP

class ABP_EscortGem_Heartstone_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* HeartStoneGemIdle;
    UParticleSystemComponent* P_OmoranHeartStoneMagic_01;
    UPointLightComponent* PointLight;
    UOutlineComponent* outline;
    float Timeline_0_NewTrack_0_0B9A7E48466E6979BF52FEBAB3551DF1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0B9A7E48466E6979BF52FEBAB3551DF1;
    UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Receive_OnDeposited(UPlayerCharacter* fromPlayer);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_EscortGem_Heartstone(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_Event_fromPlayer);
}

#endif
