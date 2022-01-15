#ifndef UE4SS_SDK_BP_SupplyPod_Spawn_HPP
#define UE4SS_SDK_BP_SupplyPod_Spawn_HPP

class ABP_SupplyPod_Spawn_C : URessuplyPodSpawn
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UDropToTerrainComponent* DropToTerrain;
    UStaticMeshComponent* StaticMesh;
    UChildActorComponent* CaveData;
    UStaticMeshComponent* Cube;
    UChildActorComponent* MisisonData;
    UStaticMeshComponent* Mesh_Left;
    UBoxComponent* Box_Left;
    UStaticMeshComponent* Mesh_Back;
    UBoxComponent* Box_Back;
    UStaticMeshComponent* Mesh_Right;
    UBoxComponent* Box_Right;
    UStaticMeshComponent* mesh_front;
    UBoxComponent* Box_Front;
    USceneComponent* Doors;
    UStaticMeshComponent* Cylinder;
    UParticleSystemComponent* P_DropPod_DoorRocks1;
    UParticleSystemComponent* P_DropPod_DoorRocks;
    UMeshCarverComponent* MeshCarver;
    UAudioComponent* DropPodDrilling_Supply_Cue;
    UPointLightComponent* PointLight;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USceneComponent* PlayerSpawn;
    UStaticMeshComponent* Mesh_Bottom;
    UPathfinderCollisionComponent* PathfinderCollision;
    USkeletalMeshComponent* SK_DropPod_Drill;
    UAudioComponent* Audio;
    UOutlineComponent* outline;
    UAutoCarverComponent* AutoCarver;
    URadarPointComponent* radarPoint;
    float Timeline_0_RedLightIntensity_B6127BD049EFB0C47436D5B0D49067CC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B6127BD049EFB0C47436D5B0D49067CC;
    UTimelineComponent* Timeline_0;
    AFSDPlayerController* Player;
    APlayerCharacter* Character;
    bool RocksParticlesDisabled;
    bool SidesDestroyed;
    bool LightsOff;
    bool HideTheDoorsForLatejoiners;
    bool DoorsPushedAway;
    bool RemoveDoorsIfTheyAreNotPushed;

    void OnRep_RemoveDoorsIfTheyAreNotPushed(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnRep_LightsOff();
    void DoorSlamAudio(UPrimitiveComponent* prim, float Speed, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue);
    void FindNearestPlayer(UPlayerCharacter* fromCharacter, UPlayerCharacter*& OutNearestPlayer, float IterDist, float NearestDist, UPlayerCharacter* IterPlayer, UPlayerCharacter* NearestPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
    void PushDoor(UPrimitiveComponent* prim, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetRightVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
    void OnRep_SidesDestroyed();
    void OnRep_RocksParticlesDisabled();
    void OnRep_Character(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsValid_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void OnDroppodCloseToImpact();
    void OnDroppodImpact();
    void Test Drop Pod();
    void ReceiveBeginPlay();
    void HandleWelcomeShouting(UPlayerCharacter* LateJoinCharacter);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Front_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Back_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Box_Left_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void CameraShake(TSubclassOf<UCameraShake> Shake, float Scale, uint8 PlaySpace, FRotator UserPlaySpaceRot);
    void SetController(UFSDPlayerController* Controller);
    void SetCharacter(UPlayerCharacter* Character);
    void ExecuteUbergraph_BP_SupplyPod_Spawn(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_LateJoinCharacter, bool CallFunc_K2_SetActorRotation_ReturnValue, UPlayerCharacter* CallFunc_FindNearestPlayer_OutNearestPlayer, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, FVector K2Node_ComponentBoundEvent_NormalImpulse_3, const FHitResult K2Node_ComponentBoundEvent_Hit_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, FVector K2Node_ComponentBoundEvent_NormalImpulse_2, const FHitResult K2Node_ComponentBoundEvent_Hit_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse_1, const FHitResult K2Node_ComponentBoundEvent_Hit_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<UCameraShake> K2Node_CustomEvent_Shake, float K2Node_CustomEvent_Scale, uint8 K2Node_CustomEvent_PlaySpace, FRotator K2Node_CustomEvent_UserPlaySpaceRot, UFSDPlayerController* K2Node_Event_controller, UPlayerCharacter* K2Node_Event_character, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3);
}

#endif
