#ifndef UE4SS_SDK_BP_CabinController_HPP
#define UE4SS_SDK_BP_CabinController_HPP

class ABP_CabinController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    ABP_CabinOwnerSign_C* CabinSign;
    ABP_PlayerController_SpaceRig_C* CabinOwner;
    AFSDPlayerState* OwnerState;
    ASpacerigStart* StartSpot;
    ABP_DeathStats_C* InfirmaryStats;

    void OnRep_OwnerState(bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void RemoveOwner();
    void Set Cabin Owner(UFSDPlayerController* Controller);
    void Controller leave(AActor* DestroyedActor);
    void ExecuteUbergraph_BP_CabinController(int32 EntryPoint, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, PlayerSpawnInHub__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UFSDPlayerController* K2Node_CustomEvent_Controller, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_CustomEvent_DestroyedActor, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
