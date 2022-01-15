#ifndef UE4SS_SDK_BP_Hologram_HPP
#define UE4SS_SDK_BP_Hologram_HPP

class ABP_Hologram_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Usable_Collider;
    URotatingMovementComponent* RotatingMovement;
    UTextRenderComponent* TextRender;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    float RotationSpeed;
    int32 NumberOfMarkers;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Hologram(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}

#endif
