#ifndef UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP
#define UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP

class ABP_SelectCharacterOnlyConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* Box;
    UTextRenderComponent* TextRender;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh1;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_SelectCharacterOnlyConsole(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
