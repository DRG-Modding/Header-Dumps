#ifndef UE4SS_SDK_BP_GunkSeed_HPP
#define UE4SS_SDK_BP_GunkSeed_HPP

class ABP_GunkSeed_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Sphere;
    class UCarriableComponent* Carriable;
    class USphereComponent* UseSphere;
    FVector throwForce;
    class USoundBase* ImpactSound;
    float MaxLength;

    void ReceiveBeginPlay();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Throw(FVector force);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ExecuteUbergraph_BP_GunkSeed(int32 EntryPoint);
};

#endif
