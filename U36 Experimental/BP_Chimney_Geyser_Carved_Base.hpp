#ifndef UE4SS_SDK_BP_Chimney_Geyser_Carved_Base_HPP
#define UE4SS_SDK_BP_Chimney_Geyser_Carved_Base_HPP

class ABP_Chimney_Geyser_Carved_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainDetectComponent* TerrainDetect1;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* DefaultSceneRoot;
    bool IsBroken;
    class UAudioComponent* SoundInstance;

    void OnRep_IsBroken();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ExecuteUbergraph_BP_Chimney_Geyser_Carved_Base(int32 EntryPoint);
};

#endif
