#ifndef UE4SS_SDK_BP_Refinery_Extractor_HPP
#define UE4SS_SDK_BP_Refinery_Extractor_HPP

class ABP_Refinery_Extractor_C : UPipelineExtractorPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    UChildActorComponent* BP_Extractor_Lamp02;
    UChildActorComponent* BP_Extractor_Lamp01;
    UStaticMeshComponent* SM_railconnector_02;
    UStaticMeshComponent* SM_railconnector_01;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UOutlineComponent* outline;
    UBP_Extractor_Shell_C* Door_Back;
    UBP_Extractor_Shell_C* Door_Front;
    UBP_Extractor_Shell_C* Door_Left;
    UBP_Extractor_Shell_C* Door_Right;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USceneComponent* Doors;
    UAudioComponent* AudioDropStarted;
    USkeletalMeshComponent* Drill;
    UPathfinderCollisionComponent* PathfinderCollision;
    UAudioComponent* MineheadDrilling_Cue;
    UAutoCarverComponent* AutoCarver;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    USceneComponent* ConnectedIndicator;
    UActorTrackingComponent* ActorTrackingIcon;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* Scene;
    UParticleSystemComponent* DrillParticles01;
    UParticleSystemComponent* DrillParticles02;
    bool DoorsPushedAway;
    bool ItemEquipped;

    void UpdateState(EPipelineBuildState BuildState, bool Temp_bool_Variable, EOutline Temp_byte_Variable, EOutline Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EOutline K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void UserConstructionScript();
    void ExtractorPodOrderedEvent(UPlayerCharacter* InUser);
    void ReceiveBeginPlay();
    void OnDropStarted();
    void OnItemEquipped_Event(AItem* Item);
    void SetPipelineBuilderEquipped(bool InEquipped);
    void ReceiveConnectedToSegment(UPipelineSegment* InConnectedSegment);
    void Setup ItemEquipped();
    void OnDroppodImpact();
    void OnPipelineStateChanged(EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Refinery_Extractor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UPlayerCharacter* K2Node_Event_InUser, AItem* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_InEquipped, UTrackBuilderItem* K2Node_DynamicCast_AsTrack_Builder_Item, bool K2Node_DynamicCast_bSuccess, UPipelineSegment* K2Node_Event_InConnectedSegment, PipelineStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, EPipelineBuildState K2Node_CustomEvent_InPipelineState, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
}

#endif
