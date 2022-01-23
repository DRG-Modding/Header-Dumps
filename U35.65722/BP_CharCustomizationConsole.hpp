#ifndef UE4SS_SDK_BP_CharCustomizationConsole_HPP
#define UE4SS_SDK_BP_CharCustomizationConsole_HPP

class ABP_CharCustomizationConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget3;
    class UStaticMeshComponent* Mesh_Monitor4;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* Mesh_Monitor2;
    class UStaticMeshComponent* Mesh_LockerLeft1;
    class UStaticMeshComponent* Mesh_LockerRight1;
    class UChildActorComponent* ChildActor;
    class UStaticMeshComponent* Mesh_LockerRight;
    class UStaticMeshComponent* Mesh_LockerLeft;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* Mesh_Monitor;
    class UTextRenderComponent* TextRender;
    class UBoxComponent* InteractionCollider;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_CharCustomizationConsole(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
