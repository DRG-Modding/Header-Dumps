#ifndef UE4SS_SDK_BP_OxygenTank_HPP
#define UE4SS_SDK_BP_OxygenTank_HPP

class ABP_OxygenTank_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UStaticMeshComponent* SM_GasCanister;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnOxygenActivationChanged_Event_0(bool IsActive);
    void ExecuteUbergraph_BP_OxygenTank(int32 EntryPoint, bool K2Node_CustomEvent_isActive, FExecuteUbergraph_BP_OxygenTankK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsMutatorActive_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, class UOxygenSourceComponent* CallFunc_GetComponentByClass_ReturnValue);
};

#endif
