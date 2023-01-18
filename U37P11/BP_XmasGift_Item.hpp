#ifndef UE4SS_SDK_BP_XmasGift_Item_HPP
#define UE4SS_SDK_BP_XmasGift_Item_HPP

class ABP_XmasGift_Item_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;
    TArray<class UStaticMesh*> GiftOptions;
    class USoundBase* HoHoHo;
    TArray<class UMaterialInterface*> GiftMats;
    bool CanOpen;
    class UStaticMesh* CurrentGiftOption;
    class UMaterialInterface* CurrentMat1;
    class UMaterialInterface* CurrentMat2;

    void RandomizeGift();
    void OnRep_CurrentMat2();
    void OnRep_CurrentMat1();
    void OnRep_CurrentGiftOption();
    void XmasLaugh(FVector Location);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_XmasGift_Item(int32 EntryPoint);
};

#endif
