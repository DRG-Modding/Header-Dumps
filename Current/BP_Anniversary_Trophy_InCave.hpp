#ifndef UE4SS_SDK_BP_Anniversary_Trophy_InCave_HPP
#define UE4SS_SDK_BP_Anniversary_Trophy_InCave_HPP

class ABP_Anniversary_Trophy_InCave_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_LunarRabbit_Glitter;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class UOutlineComponent* outline;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UPointLightComponent* PointLight;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class USceneComponent* MeshRoot;
    class UBoxComponent* Box;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCarriableComponent* Carriable;
    FVector throwForce;
    class USoundBase* PickupSound;
    bool ShowOnTerrainScanner;
    float ActivateScannerDistance;
    float 3P_MugScale;
    FVector MeshRootStartRelativeLocation;
    float StartWaveDistance;
    class USoundBase* ImpactSound;
    bool CanTriggerSound;
    FName ImpactSoundParameter;

    void OnRep_ShowOnTerrainScanner();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_InCaveOktoberfestMug_TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__BP_InCaveOktoberfestMug_TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__BP_InCaveOktoberfestMug_TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void All_PlayDugFree();
    void UpdateAttachState(bool Attached);
    void BndEvt__BP_InCaveOktoberfestMug_Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
    void BndEvt__BP_InCaveOktoberfestMug_Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void BndEvt__BP_InCaveOktoberfestMug_Usable_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnAttachChanged(bool Attached);
    void Throw(FVector force);
    void CheckForPlayersNearby();
    void SetMeshVisibility(bool IsAttached);
    void BndEvt__BP_InCaveOktoberfestMug_Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void TalkToSelf();
    void ExecuteUbergraph_BP_Anniversary_Trophy_InCave(int32 EntryPoint);
};

#endif
