#ifndef UE4SS_SDK_BP_ConsoleKPI_HPP
#define UE4SS_SDK_BP_ConsoleKPI_HPP

class ABP_ConsoleKPI_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class UStaticMeshComponent* Cube;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_ConsoleKPI(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess);
};

#endif
