#ifndef UE4SS_SDK_BP_MissionStats_HPP
#define UE4SS_SDK_BP_MissionStats_HPP

class ABP_MissionStats_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cube1;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MissionStats(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
}

#endif
