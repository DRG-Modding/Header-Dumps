#ifndef UE4SS_SDK_BP_HeightenedSense_Discharge_HPP
#define UE4SS_SDK_BP_HeightenedSense_Discharge_HPP

class ABP_HeightenedSense_Discharge_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HeightenedSense_Discharge(int32 EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
}

#endif
