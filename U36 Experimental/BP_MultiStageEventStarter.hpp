#ifndef UE4SS_SDK_BP_MultiStageEventStarter_HPP
#define UE4SS_SDK_BP_MultiStageEventStarter_HPP

class ABP_MultiStageEventStarter_C : public AEventStarterButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* StaticMesh;
    class USkeletalMeshComponent* SkeletalMesh;
    class UParticleSystem* EjectParticles;
    class USoundCue* CrumbleSpire;
    bool EffectsShown;
    class UMaterialInstanceDynamic* DynamicMaterial;
    float OriginalEmissive;

    void ShowUsedEffects();
    void OnRep_EffectsShown();
    void CheckTerrain(bool& ShouldCarve);
    void UserConstructionScript();
    void OnOpenedForUse(bool wasOpened);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MultiStageEventStarter(int32 EntryPoint);
};

#endif
