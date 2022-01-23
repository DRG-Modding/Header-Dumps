#ifndef UE4SS_SDK_BP_AmberEvent_HPP
#define UE4SS_SDK_BP_AmberEvent_HPP

class ABP_AmberEvent_C : public AAmberEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule1;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_Prim_Cylinder_06sides;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UStaticMeshComponent* StaticMesh1;
    class UMeshCarverComponent* MeshCarver;
    class UAudioComponent* AmberLaserActivated;
    class UParticleSystemComponent* ParticleSystem;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class URestrictedResourceBank* RestrictedResourceBank;
    class UChildActorComponent* StartButton1;
    class UChildActorComponent* StartButton2;
    class UChildActorComponent* StartButton4;
    class UChildActorComponent* StartButton3;
    class USkeletalMeshComponent* SkeletalMesh;
    class UTerrainPlacementComponent* terrainPlacement;

    void SpawnEnemies();
    void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void ReceiveBeginPlay();
    void OnEventFinished(bool eventSuccess);
    void OnEventTriggered();
    void ExecuteUbergraph_BP_AmberEvent(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsEventActive_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsEventActive_ReturnValue_1);
};

#endif
