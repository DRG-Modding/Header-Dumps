#ifndef UE4SS_SDK_BP_FacilityCore_DataRack_HPP
#define UE4SS_SDK_BP_FacilityCore_DataRack_HPP

class ABP_FacilityCore_DataRack_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* DataRackIdle_Cue;
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLightshadow;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class UCarriableComponent* Carriable;
    class UBoxComponent* Box;
    FVector throwForce;
    class USoundCue* ImpactSound;
    bool CanTriggerSound;
    FName ImpactSoundParameter;

    void ReceiveBeginPlay();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_FacilityCore_DataRack(int32 EntryPoint);
};

#endif
