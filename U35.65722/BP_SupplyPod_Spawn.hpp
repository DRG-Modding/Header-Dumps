#ifndef UE4SS_SDK_BP_SupplyPod_Spawn_HPP
#define UE4SS_SDK_BP_SupplyPod_Spawn_HPP

class ABP_SupplyPod_Spawn_C : public ARessuplyPodSpawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* StaticMesh;
    class UChildActorComponent* CaveData;
    class UStaticMeshComponent* Cube;
    class UChildActorComponent* MisisonData;
    class UStaticMeshComponent* Mesh_Left;
    class UBoxComponent* Box_Left;
    class UStaticMeshComponent* Mesh_Back;
    class UBoxComponent* Box_Back;
    class UStaticMeshComponent* Mesh_Right;
    class UBoxComponent* Box_Right;
    class UStaticMeshComponent* mesh_front;
    class UBoxComponent* Box_Front;
    class USceneComponent* Doors;
    class UStaticMeshComponent* Cylinder;
    class UParticleSystemComponent* P_DropPod_DoorRocks1;
    class UParticleSystemComponent* P_DropPod_DoorRocks;
    class UMeshCarverComponent* MeshCarver;
    class UAudioComponent* DropPodDrilling_Supply_Cue;
    class UPointLightComponent* PointLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* PlayerSpawn;
    class UStaticMeshComponent* Mesh_Bottom;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class UAudioComponent* Audio;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    class URadarPointComponent* radarPoint;
    float Timeline_0_RedLightIntensity_B6127BD049EFB0C47436D5B0D49067CC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B6127BD049EFB0C47436D5B0D49067CC;
    class UTimelineComponent* Timeline_0;
    class AFSDPlayerController* Player;
    class APlayerCharacter* Character;
    bool RocksParticlesDisabled;
    bool SidesDestroyed;
    bool LightsOff;
    bool HideTheDoorsForLatejoiners;
    bool DoorsPushedAway;
    bool RemoveDoorsIfTheyAreNotPushed;

    void OnRep_RemoveDoorsIfTheyAreNotPushed(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnRep_LightsOff();
    void DoorSlamAudio(class UPrimitiveComponent* prim, float Speed, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue);
    void FindNearestPlayer(class APlayerCharacter* fromCharacter, class APlayerCharacter*& OutNearestPlayer, float IterDist, float NearestDist, class APlayerCharacter* IterPlayer, class APlayerCharacter* NearestPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
    void PushDoor(class UPrimitiveComponent* prim, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
    void OnRep_SidesDestroyed();
    void OnRep_RocksParticlesDisabled();
    void OnRep_Character(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void OnDroppodCloseToImpact();
    void OnDroppodImpact();
    void Test Drop Pod();
    void ReceiveBeginPlay();
    void HandleWelcomeShouting(class APlayerCharacter* LateJoinCharacter);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void CameraShake(TSubclassOf<class UCameraShake> Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace, FRotator UserPlaySpaceRot);
    void SetController(class AFSDPlayerController* Controller);
    void SetCharacter(class APlayerCharacter* Character);
    void ExecuteUbergraph_BP_SupplyPod_Spawn(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_LateJoinCharacter, bool CallFunc_K2_SetActorRotation_ReturnValue, class APlayerCharacter* CallFunc_FindNearestPlayer_OutNearestPlayer, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, FVector K2Node_ComponentBoundEvent_NormalImpulse_3, const FHitResult K2Node_ComponentBoundEvent_Hit_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, FVector K2Node_ComponentBoundEvent_NormalImpulse_2, const FHitResult K2Node_ComponentBoundEvent_Hit_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse_1, const FHitResult K2Node_ComponentBoundEvent_Hit_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class UCameraShake> K2Node_CustomEvent_Shake, float K2Node_CustomEvent_Scale, TEnumAsByte<ECameraAnimPlaySpace::Type> K2Node_CustomEvent_PlaySpace, FRotator K2Node_CustomEvent_UserPlaySpaceRot, class AFSDPlayerController* K2Node_Event_controller, class APlayerCharacter* K2Node_Event_character, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3);
};

#endif
