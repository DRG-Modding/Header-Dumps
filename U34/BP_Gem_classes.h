// BlueprintGeneratedClass BP_Gem.BP_Gem_C
// Size: 0x321 (Inherited: 0x260)
struct ABP_Gem_C : AGem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x268(0x08)
	struct UTerrainDetectComponent* TerrainDetect5; // 0x270(0x08)
	struct UTerrainDetectComponent* TerrainDetect4; // 0x278(0x08)
	struct UTerrainDetectComponent* TerrainDetect3; // 0x280(0x08)
	struct UTerrainDetectComponent* TerrainDetect2; // 0x288(0x08)
	struct UTerrainDetectComponent* TerrainDetect1; // 0x290(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x298(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x2a0(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a8(0x08)
	struct UCarriableComponent* Carriable; // 0x2b0(0x08)
	struct UBoxComponent* Box; // 0x2b8(0x08)
	struct USphereComponent* Sphere; // 0x2c0(0x08)
	int32_t Detects; // 0x2c8(0x04)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
	struct USoundCue* DugFreeCue; // 0x2d0(0x08)
	bool CanTriggerSound; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct USoundBase* ImpactSound; // 0x2e0(0x08)
	struct FName ImpactSoundParameter; // 0x2e8(0x08)
	struct USoundBase* PickupSound; // 0x2f0(0x08)
	struct FVector InWorldScale; // 0x2f8(0x0c)
	struct FVector ThrowForce; // 0x304(0x0c)
	bool VisibleToTerrainScanner; // 0x310(0x01)
	bool ExposeNeighbourhoodToTerrainScanner; // 0x311(0x01)
	char UnknownData_312[0x6]; // 0x312(0x06)
	struct UFSDAchievement* CollectedAchievement; // 0x318(0x08)
	bool VisibleToScannerAfterDigOut; // 0x320(0x01)

	void ReleaseToWorld(); // Function BP_Gem.BP_Gem_C.ReleaseToWorld
	void SetPickedUp(struct APlayerCharacter* Character); // Function BP_Gem.BP_Gem_C.SetPickedUp
	void PointCleared(); // Function BP_Gem.BP_Gem_C.PointCleared
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature
	void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature
	void All_PlayDugFree(); // Function BP_Gem.BP_Gem_C.All_PlayDugFree
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Gem.BP_Gem_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature(); // Function BP_Gem.BP_Gem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Gem.BP_Gem_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void Throw(struct FVector force); // Function BP_Gem.BP_Gem_C.Throw
	void ReceiveBeginPlay(); // Function BP_Gem.BP_Gem_C.ReceiveBeginPlay
	void Receive_OnDeposited(struct APlayerCharacter* fromPlayer); // Function BP_Gem.BP_Gem_C.Receive_OnDeposited
	void Cheat_ReleaseToWorld(); // Function BP_Gem.BP_Gem_C.Cheat_ReleaseToWorld
	void ExecuteUbergraph_BP_Gem(int32_t EntryPoint); // Function BP_Gem.BP_Gem_C.ExecuteUbergraph_BP_Gem
};

