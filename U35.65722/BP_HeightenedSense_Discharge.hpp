#ifndef UE4SS_SDK_BP_HeightenedSense_Discharge_HPP
#define UE4SS_SDK_BP_HeightenedSense_Discharge_HPP

class ABP_HeightenedSense_Discharge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HeightenedSense_Discharge(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
};

#endif
