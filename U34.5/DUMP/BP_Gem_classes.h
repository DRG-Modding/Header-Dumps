// BlueprintGeneratedClass BP_Gem.BP_Gem_C
// Size: 0x321 (Inherited: 0x260)
struct ABP_Gem_C : AGem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x268(0x08)
	UTerrainDetectComponent* TerrainDetect5; // 0x270(0x08)
	UTerrainDetectComponent* TerrainDetect4; // 0x278(0x08)
	UTerrainDetectComponent* TerrainDetect3; // 0x280(0x08)
	UTerrainDetectComponent* TerrainDetect2; // 0x288(0x08)
	UTerrainDetectComponent* TerrainDetect1; // 0x290(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x298(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x2a0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a8(0x08)
	UCarriableComponent* Carriable; // 0x2b0(0x08)
	UBoxComponent* Box; // 0x2b8(0x08)
	USphereComponent* Sphere; // 0x2c0(0x08)
	int32_t Detects; // 0x2c8(0x04)
	USoundCue* DugFreeCue; // 0x2d0(0x08)
	bool CanTriggerSound; // 0x2d8(0x01)
	USoundBase* ImpactSound; // 0x2e0(0x08)
	FName ImpactSoundParameter; // 0x2e8(0x08)
	USoundBase* PickupSound; // 0x2f0(0x08)
	FVector InWorldScale; // 0x2f8(0x0c)
	FVector ThrowForce; // 0x304(0x0c)
	bool VisibleToTerrainScanner; // 0x310(0x01)
	bool ExposeNeighbourhoodToTerrainScanner; // 0x311(0x01)
	UFSDAchievement* CollectedAchievement; // 0x318(0x08)
	bool VisibleToScannerAfterDigOut; // 0x320(0x01)

	void ReleaseToWorld();
	void SetPickedUp(APlayerCharacter* Character);
	void PointCleared();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
	void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature();
	void All_PlayDugFree();
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void Throw(FVector force);
	void ReceiveBeginPlay();
	void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	void Cheat_ReleaseToWorld();
	void ExecuteUbergraph_BP_Gem(int32_t EntryPoint);
};

