#ifndef UE4SS_SDK_BP_Chimney_Geyser_Carved_Base_HPP
#define UE4SS_SDK_BP_Chimney_Geyser_Carved_Base_HPP

class ABP_Chimney_Geyser_Carved_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainDetectComponent* TerrainDetect1;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UTerrainPlacementComponent* terrainPlacement;
    UParticleSystemComponent* ParticleSystem;
    USceneComponent* DefaultSceneRoot;
    bool IsBroken;
    UAudioComponent* SoundInstance;

    void OnRep_IsBroken(bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Chimney_Geyser_Carved_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
}

#endif
