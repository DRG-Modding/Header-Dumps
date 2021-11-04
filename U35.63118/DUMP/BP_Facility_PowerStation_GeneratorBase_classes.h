// BlueprintGeneratedClass BP_Facility_PowerStation_GeneratorBase.BP_Facility_PowerStation_GeneratorBase_C
// Size: 0x341 (Inherited: 0x258)
struct ABP_Facility_PowerStation_GeneratorBase_C : AFacilityPowerStation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UStaticMeshComponent* GunTower_Carver01; // 0x260(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x268(0x08)
	UNiagaraComponent* ConnectionBeam; // 0x270(0x08)
	USphereComponent* DiscoverSphere; // 0x278(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x280(0x08)
	URoomCarverComponent* RoomCarver; // 0x288(0x08)
	UOutlineComponent* outline; // 0x290(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x298(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2a0(0x08)
	USingleUsableComponent* ActivateUsable; // 0x2a8(0x08)
	USphereComponent* Usable; // 0x2b0(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	UTetherComponent* Tether; // 0x2c0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	FMulticastInlineDelegate OnShieldGeneratorCharged; // 0x2d0(0x10)
	FMulticastInlineDelegate OnOverChargerCalled; // 0x2e0(0x10)
	int32_t roomIndex; // 0x2f0(0x04)
	float HackingPower; // 0x2f4(0x04)
	FMulticastInlineDelegate OnProgress; // 0x2f8(0x10)
	FMulticastInlineDelegate FirstConnect; // 0x308(0x10)
	bool HasHadPower; // 0x318(0x01)
	bool Discovered; // 0x319(0x01)
	FMulticastInlineDelegate PowerChanged; // 0x320(0x10)
	UTetherComponent* NewVar_1; // 0x330(0x08)
	UMaterialInstanceDynamic* LightMaterial; // 0x338(0x08)
	bool StartedHacking; // 0x340(0x01)

	AActor* GetBossActor();
	UBossFightWidget* GetWidgetClass();
	bool IsStillValid();
	void GetCallOverchargerUsable(USingleUsableComponent* Usable);
	void OnRep_HackingPower();
	void GetConnectorPoint(FTransform OutTransform);
	void OnRep_Discovered();
	void SetRoom(int32_t roomIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Tether_K2Node_ComponentBoundEvent_0_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__DiscoverSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Tether_K2Node_ComponentBoundEvent_3_TeherMessage_Delegate__DelegateSignature(FName Message);
	void Cheat_CallOverCharger();
	void OnMatchStarted_Event_1();
	void OnHackingComplete();
	void OnHackingChanged(bool IsHacking);
	void ExecuteUbergraph_BP_Facility_PowerStation_GeneratorBase(int32_t EntryPoint);
	void PowerChanged__DelegateSignature(bool hasPower);
	void FirstConnect__DelegateSignature(ABP_Facility_PowerStation_GeneratorBase_C* Generator, UTetherComponent* tetherlineStart);
	void OnProgress__DelegateSignature(float Progress);
	void OnOverChargerCalled__DelegateSignature(FVector Location, int32_t roomIndex);
	void OnShieldGeneratorCharged__DelegateSignature(ABP_Facility_PowerStation_GeneratorBase_C* Generator);
};

