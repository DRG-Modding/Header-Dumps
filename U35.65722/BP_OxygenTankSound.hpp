#ifndef UE4SS_SDK_BP_OxygenTankSound_HPP
#define UE4SS_SDK_BP_OxygenTankSound_HPP

class ABP_OxygenTankSound_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class USoundAttenuation* OverrideAttenuation;

    void ReceiveBeginPlay();
    void OnOxygenActivationChanged_Event_0(bool IsActive);
    void ExecuteUbergraph_BP_OxygenTankSound(int32 EntryPoint, FExecuteUbergraph_BP_OxygenTankSoundK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class UOxygenSourceComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_isActive, bool CallFunc_IsValid_ReturnValue);
};

#endif
