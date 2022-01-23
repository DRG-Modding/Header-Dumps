#ifndef UE4SS_SDK_BP_CabinController_HPP
#define UE4SS_SDK_BP_CabinController_HPP

class ABP_CabinController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ABP_CabinOwnerSign_C* CabinSign;
    class ABP_PlayerController_SpaceRig_C* CabinOwner;
    class AFSDPlayerState* OwnerState;
    class ASpacerigStart* StartSpot;
    class ABP_DeathStats_C* InfirmaryStats;

    void OnRep_OwnerState(bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void RemoveOwner();
    void Set Cabin Owner(class AFSDPlayerController* Controller);
    void Controller leave(class AActor* DestroyedActor);
    void ExecuteUbergraph_BP_CabinController(int32 EntryPoint, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, FExecuteUbergraph_BP_CabinControllerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_CabinControllerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDPlayerController* K2Node_CustomEvent_Controller, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DestroyedActor, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
