#ifndef UE4SS_SDK_BP_CharCustomizationConsole_HPP
#define UE4SS_SDK_BP_CharCustomizationConsole_HPP

class ABP_CharCustomizationConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget3;
    UStaticMeshComponent* Mesh_Monitor4;
    UWidgetComponent* Widget1;
    UStaticMeshComponent* Mesh_Monitor2;
    UStaticMeshComponent* Mesh_LockerLeft1;
    UStaticMeshComponent* Mesh_LockerRight1;
    UChildActorComponent* ChildActor;
    UStaticMeshComponent* Mesh_LockerRight;
    UStaticMeshComponent* Mesh_LockerLeft;
    UWidgetComponent* Widget;
    UStaticMeshComponent* Mesh_Monitor;
    UTextRenderComponent* TextRender;
    UBoxComponent* InteractionCollider;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CharCustomizationConsole(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
