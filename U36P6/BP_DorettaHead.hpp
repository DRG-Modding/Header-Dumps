#ifndef UE4SS_SDK_BP_DorettaHead_HPP
#define UE4SS_SDK_BP_DorettaHead_HPP

class ABP_DorettaHead_C : public ADorrettaHead
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NiagaraNoBlinking;
    class USphereComponent* SphereTrigger;
    class UNiagaraComponent* Niagara;
    class UStaticMeshComponent* SM_Doretta;
    class USceneComponent* DorettaHeadRoot;
    class USceneComponent* SoundSpawnPoint;
    class USphereComponent* Sphere1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class USphereComponent* SphereUsable;
    FVector JIggle_Jiggle_4D1EF936403F1B634C819C8AC37A7DE1;
    TEnumAsByte<ETimelineDirection::Type> JIggle__Direction_4D1EF936403F1B634C819C8AC37A7DE1;
    class UTimelineComponent* Jiggle;
    FVector throwForce;
    bool IsPickedUp;
    float LastSoundPlayTime;
    float MinTimeBetweenSounds;
    class USoundCue* ImpactSound;

    void JIggle__FinishedFunc();
    void JIggle__UpdateFunc();
    void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__CarriableComponent_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void PlayDorettaSound(class USoundBase* Sound);
    void ReceiveBeginPlay();
    void PlaySound();
    void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_DorettaHead(int32 EntryPoint);
};

#endif
