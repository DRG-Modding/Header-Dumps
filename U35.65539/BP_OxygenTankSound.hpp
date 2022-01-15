#ifndef UE4SS_SDK_BP_OxygenTankSound_HPP
#define UE4SS_SDK_BP_OxygenTankSound_HPP

class ABP_OxygenTankSound_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    USoundAttenuation* OverrideAttenuation;

    void ReceiveBeginPlay();
    void OnOxygenActivationChanged_Event_0(bool IsActive);
    void ExecuteUbergraph_BP_OxygenTankSound(int32 EntryPoint, OxygenActiveDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, UOxygenSourceComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_isActive, bool CallFunc_IsValid_ReturnValue);
}

#endif
