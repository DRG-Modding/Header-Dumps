#ifndef UE4SS_SDK_BP_ResourcePouch_HPP
#define UE4SS_SDK_BP_ResourcePouch_HPP

class ABP_ResourcePouch_C : public AResourcePouch
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Useable;
    class UPointLightComponent* PointLight;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UBoxComponent* Box;
    class UCarriableComponent* Carriable;
    FVector throwForce;

    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void OnAttachChanged(bool Attached);
    void ExecuteUbergraph_BP_ResourcePouch(int32 EntryPoint);
};

#endif
