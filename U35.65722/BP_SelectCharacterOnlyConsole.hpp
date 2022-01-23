#ifndef UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP
#define UE4SS_SDK_BP_SelectCharacterOnlyConsole_HPP

class ABP_SelectCharacterOnlyConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class UTextRenderComponent* TextRender;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh1;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_SelectCharacterOnlyConsole(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
