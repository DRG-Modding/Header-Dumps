#ifndef UE4SS_SDK_BP_Hologram_HPP
#define UE4SS_SDK_BP_Hologram_HPP

class ABP_Hologram_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Usable_Collider;
    class URotatingMovementComponent* RotatingMovement;
    class UTextRenderComponent* TextRender;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    float RotationSpeed;
    int32 NumberOfMarkers;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Hologram(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
};

#endif
