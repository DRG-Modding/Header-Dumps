#ifndef UE4SS_SDK_BP_Refinery_Target_HPP
#define UE4SS_SDK_BP_Refinery_Target_HPP

class ABP_Refinery_Target_C : APipelineFinish
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Audio;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* ST_LiquidMorkite_Well;
    UStaticMeshComponent* ST_LiquidMorkite_Well1;
    USceneComponent* GroundRoot;
    UOutlineComponent* outline;
    UAudioComponent* AudioIdle;
    UMeshCarverComponent* MeshCarver-MaterialVein2;
    UMeshCarverComponent* MeshCarver-MaterialVein1;
    ULevelGenerationDebris* LevelGenerationDebris;
    UMeshCarverComponent* MeshCarver-MaterialBottom;
    UMeshCarverComponent* MeshCarver-Outside;
    UMeshCarverComponent* MeshCarver-Mid;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    UPointLightComponent* FindMe_PointLight;
    UChildActorComponent* ExtractorBlueprintChildActor;
    USphereComponent* OrderExtractorCollision;
    USphereComponent* GroundCollision;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* ResourceMesh;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    bool PlayerLookingAtTarget;
    bool PlacementValid;
    APipelineStart* PipelineStart;
    ERefineryState RefineryState;
    bool IsRefining;

    FVector GetLandingOffset(bool CallFunc_IsValid_ReturnValue);
    void UpdateIsRefining(FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue);
    void UpdateState(bool ShowBlueprint, FName Temp_name_Variable, FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ABP_Refinery_Extractor_Blueprint_C* K2Node_DynamicCast_AsBP_Refinery_Extractor_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable, FName K2Node_Select_Default);
    void UserConstructionScript();
    void StartBlinking();
    void ReceiveExtractorPodSpawned(UPipelineExtractorPod* InExtractorPod);
    void BndEvt__PipelineEndConnection_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    void BndEvt__UsableOrderExtractor_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnRefineryStateChanged_Event(ERefineryState InRefineryState);
    void OnStateChanged_Event(ARessuplyPod* InPod, ERessuplyPodState InState);
    void BndEvt__Outline_K2Node_ComponentBoundEvent_2_OutlineChanged__DelegateSignature(EOutline InOutline);
    void InitialCarve();
    void OnMatchStarted();
    void StopBlinking();
    void Ping(bool InValidPlacement);
    void ReceiveBeginPlay();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    void ExecuteUbergraph_BP_Refinery_Target(int32 EntryPoint, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, RessuplyPodStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPipelineExtractorPod* K2Node_Event_InExtractorPod, UTrackBuilderConnectPoint* K2Node_ComponentBoundEvent_InConnectPoint, ATrackBuilderSegment* K2Node_ComponentBoundEvent_InSegment, UPipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, APipelineStart* CallFunc_GetPipelineStart_ReturnValue, bool CallFunc_IsValid_ReturnValue, ERefineryState K2Node_CustomEvent_InRefineryState, ARessuplyPod* K2Node_CustomEvent_InPod, ERessuplyPodState K2Node_CustomEvent_InState, EOutline K2Node_ComponentBoundEvent_InOutline, UBP_Refinery_Extractor_C* K2Node_DynamicCast_AsBP_Refinery_Extractor, bool K2Node_DynamicCast_bSuccess_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_HasMatchStarted_ReturnValue, bool K2Node_CustomEvent_InValidPlacement, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, ABP_Refinery_Extractor_Blueprint_C* K2Node_DynamicCast_AsBP_Refinery_Extractor_Blueprint, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_GetAttachementLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleCount, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_AddWorldOffset_SweepHitResult);
}

#endif
