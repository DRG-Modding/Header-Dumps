#ifndef UE4SS_SDK_BP_Facility_PowerStation_GeneratorBase_HPP
#define UE4SS_SDK_BP_Facility_PowerStation_GeneratorBase_HPP

class ABP_Facility_PowerStation_GeneratorBase_C : AFacilityPowerStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* GunTower_Carver01;
    UPathfinderCollisionComponent* PathfinderCollision;
    UNiagaraComponent* ConnectionBeam;
    USphereComponent* DiscoverSphere;
    UStaticMeshComponent* TerrainScannerMesh;
    URoomCarverComponent* RoomCarver;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainPlacementComponent* terrainPlacement;
    USingleUsableComponent* ActivateUsable;
    USphereComponent* Usable;
    USkeletalMeshComponent* SkeletalMesh;
    UTetherComponent* Tether;
    USceneComponent* DefaultSceneRoot;
    FBP_Facility_PowerStation_GeneratorBase_COnShieldGeneratorCharged OnShieldGeneratorCharged;
    void OnShieldGeneratorCharged(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
    FBP_Facility_PowerStation_GeneratorBase_COnOverChargerCalled OnOverChargerCalled;
    void OnOverChargerCalled(FVector Location, int32 roomIndex);
    int32 roomIndex;
    float HackingPower;
    FBP_Facility_PowerStation_GeneratorBase_COnProgress OnProgress;
    void OnProgress(float Progress);
    FBP_Facility_PowerStation_GeneratorBase_CFirstConnect FirstConnect;
    void FirstConnect(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
    bool HasHadPower;
    bool Discovered;
    FBP_Facility_PowerStation_GeneratorBase_CPowerChanged PowerChanged;
    void PowerChanged(bool hasPower);
    UTetherComponent* NewVar_0;
    UMaterialInstanceDynamic* LightMaterial;
    bool StartedHacking;
    AFacilityHackingPod* ConnectedHackingPod;
    FBP_Facility_PowerStation_GeneratorBase_CConnectedPodChanged ConnectedPodChanged;
    void ConnectedPodChanged(UFacilityHackingPod* Pod);

    AActor* GetBossActor();
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
    void OnRep_ConnectedHackingPod();
    void GetCallOverchargerUsable(USingleUsableComponent*& Usable);
    void OnRep_HackingPower();
    void GetConnectorPoint(TArray<FTransform>& OutTransform, FTransform CallFunc_GetSocketTransform_ReturnValue, TArray<FTransform>& K2Node_MakeArray_Array);
    void OnRep_Discovered(ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetRoom(int32 roomIndex);
    void UserConstructionScript(TArray<USceneComponent*> destroyThese, const UPrimitiveComponent* Temp_object_Variable, int32 CallFunc_Array_Add_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_0_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__DiscoverSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_3_TeherMessage_Delegate__DelegateSignature(const FName& Message);
    void Cheat_CallOverCharger();
    void OnMatchStarted_Event_0();
    void OnHackingComplete();
    void OnHackingChanged(bool IsHacking);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_4_TetherConnectionChanged_Deletage__DelegateSignature(UTetherComponent* frontConnection, UTetherComponent* backConnection);
    void ExecuteUbergraph_BP_Facility_PowerStation_GeneratorBase(int32 EntryPoint, UTetherComponent* CallFunc_GetTetherlineEnd_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, UFacilityHackingPod* K2Node_DynamicCast_AsFacility_Hacking_Pod, bool K2Node_DynamicCast_bSuccess, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_hasPower, FName CallFunc_MakeLiteralName_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, FName CallFunc_MakeLiteralName_ReturnValue_1, AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, const FName K2Node_ComponentBoundEvent_message, bool Temp_bool_IsClosed_Variable, bool K2Node_SwitchName_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, FName CallFunc_MakeLiteralName_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_1, UTetherComponent* CallFunc_GetTetherlineEnd_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool K2Node_Event_isHacking, InterfaceProperty CallFunc_RegisterBossFight_BossFight_CastInput, bool CallFunc_HasAuthority_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_4, bool CallFunc_IsHacked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_1, UTetherComponent* K2Node_ComponentBoundEvent_frontConnection, UTetherComponent* K2Node_ComponentBoundEvent_backConnection, FVector CallFunc_GetConnectionPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_2, FVector CallFunc_GetConnectionPoint_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool Temp_bool_IsClosed_Variable_2, MatchStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_3);
    void ConnectedPodChanged__DelegateSignature(UFacilityHackingPod* Pod);
    void PowerChanged__DelegateSignature(bool hasPower);
    void FirstConnect__DelegateSignature(UBP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
    void OnProgress__DelegateSignature(float Progress);
    void OnOverChargerCalled__DelegateSignature(FVector Location, int32 roomIndex);
    void OnShieldGeneratorCharged__DelegateSignature(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
}

#endif
