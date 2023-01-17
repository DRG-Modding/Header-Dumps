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
    void ExecuteUbergraph_BP_Hologram(int32 EntryPoint);
};

#endif
