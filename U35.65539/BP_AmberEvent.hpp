#ifndef UE4SS_SDK_BP_AmberEvent_HPP
#define UE4SS_SDK_BP_AmberEvent_HPP

class ABP_AmberEvent_C : UAmberEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule1;
    URoomCarverComponent* RoomCarver;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UStaticMeshComponent* SM_Prim_Cylinder_06sides;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UStaticMeshComponent* StaticMesh1;
    UMeshCarverComponent* MeshCarver;
    UAudioComponent* AmberLaserActivated;
    UParticleSystemComponent* ParticleSystem;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;
    URestrictedResourceBank* RestrictedResourceBank;
    UChildActorComponent* StartButton1;
    UChildActorComponent* StartButton2;
    UChildActorComponent* StartButton4;
    UChildActorComponent* StartButton3;
    USkeletalMeshComponent* SkeletalMesh;
    UTerrainPlacementComponent* terrainPlacement;

    void SpawnEnemies();
    void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void ReceiveBeginPlay();
    void OnEventFinished(bool eventSuccess);
    void OnEventTriggered();
    void ExecuteUbergraph_BP_AmberEvent(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, TArray<FVector>& CallFunc_GetSpawnPointsFromLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsEventActive_ReturnValue, bool K2Node_Event_eventSuccess, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsEventActive_ReturnValue_1);
}

#endif
