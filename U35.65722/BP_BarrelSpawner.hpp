#ifndef UE4SS_SDK_BP_BarrelSpawner_HPP
#define UE4SS_SDK_BP_BarrelSpawner_HPP

class ABP_BarrelSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Screen;
    class UWidgetComponent* Widget Barrel Counter;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    class UBillboardComponent* Billboard;
    class USceneComponent* DefaultSceneRoot;
    class ABP_Phys_Barrel01_C* LastBarrel;
    int32 BarrelsSpawned;
    int32 SpawnCicle;
    float SpawnFrequency;
    int32 BarrelCount;
    bool ReadyToReset;
    FBP_BarrelSpawner_COnSpawnBarrelKicked OnSpawnBarrelKicked;
    void OnSpawnBarrelKicked(class APlayerCharacter* Kicked by);

    void OnRep_BarrelCount(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UBarrelCount_Widget1_C* K2Node_DynamicCast_AsBarrel_Count_Widget_1, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void SpawnBarrel();
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Reset();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnBarrelKicked(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_BarrelSpawner(int32 EntryPoint, FExecuteUbergraph_BP_BarrelSpawnerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class ABP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Phys_Barrel_Hoop_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_Phys_Barrel01_Red_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class ABP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerCharacter* K2Node_CustomEvent_User, EInputKeys K2Node_CustomEvent_key, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void OnSpawnBarrelKicked__DelegateSignature(class APlayerCharacter* Kicked by);
};

#endif
