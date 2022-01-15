#ifndef UE4SS_SDK_BP_OxygenTank_HPP
#define UE4SS_SDK_BP_OxygenTank_HPP

class ABP_OxygenTank_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* FrontPlane;
    UStaticMeshComponent* SM_Screen_005;
    UParticleSystemComponent* P_GasCanister_air_Mule1;
    UStaticMeshComponent* SM_GasCanister;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnOxygenActivationChanged_Event_0(bool IsActive);
    void ExecuteUbergraph_BP_OxygenTank(int32 EntryPoint, bool K2Node_CustomEvent_isActive, OxygenActiveDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, UOxygenSourceComponent* CallFunc_GetComponentByClass_ReturnValue);
}

#endif
