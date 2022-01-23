#ifndef UE4SS_SDK_BP_Refinery_Extractor_HPP
#define UE4SS_SDK_BP_Refinery_Extractor_HPP

class ABP_Refinery_Extractor_C : public APipelineExtractorPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* BP_Extractor_Lamp02;
    class UChildActorComponent* BP_Extractor_Lamp01;
    class UStaticMeshComponent* SM_railconnector_02;
    class UStaticMeshComponent* SM_railconnector_01;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class UBP_Extractor_Shell_C* Door_Back;
    class UBP_Extractor_Shell_C* Door_Front;
    class UBP_Extractor_Shell_C* Door_Left;
    class UBP_Extractor_Shell_C* Door_Right;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* Doors;
    class UAudioComponent* AudioDropStarted;
    class USkeletalMeshComponent* Drill;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UAudioComponent* MineheadDrilling_Cue;
    class UAutoCarverComponent* AutoCarver;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class USceneComponent* ConnectedIndicator;
    class UActorTrackingComponent* ActorTrackingIcon;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Scene;
    class UParticleSystemComponent* DrillParticles01;
    class UParticleSystemComponent* DrillParticles02;
    bool DoorsPushedAway;
    bool ItemEquipped;

    void UpdateState(EPipelineBuildState BuildState, bool Temp_bool_Variable, EOutline Temp_byte_Variable, EOutline Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, EOutline K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterialFromPipelineStatus_ReturnValue);
    void UserConstructionScript();
    void ExtractorPodOrderedEvent(class APlayerCharacter* InUser);
    void ReceiveBeginPlay();
    void OnDropStarted();
    void OnItemEquipped_Event(class AItem* Item);
    void SetPipelineBuilderEquipped(bool InEquipped);
    void ReceiveConnectedToSegment(class APipelineSegment* InConnectedSegment);
    void Setup ItemEquipped();
    void OnDroppodImpact();
    void OnPipelineStateChanged(EPipelineBuildState InPipelineState);
    void ExecuteUbergraph_BP_Refinery_Extractor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class APlayerCharacter* K2Node_Event_InUser, class AItem* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_InEquipped, class ATrackBuilderItem* K2Node_DynamicCast_AsTrack_Builder_Item, bool K2Node_DynamicCast_bSuccess, class APipelineSegment* K2Node_Event_InConnectedSegment, FExecuteUbergraph_BP_Refinery_ExtractorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, EPipelineBuildState K2Node_CustomEvent_InPipelineState, bool CallFunc_IsValid_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

#endif
