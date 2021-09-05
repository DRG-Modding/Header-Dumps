// BlueprintGeneratedClass BP_GunkSeed.BP_GunkSeed_C
// Size: 0x2cd (Inherited: 0x260)
struct ABP_GunkSeed_C : AGem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UPointLightComponent* PointLight; // 0x268(0x08)
	UOutlineComponent* outline; // 0x270(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x278(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x280(0x08)
	UAudioComponent* GunkSeedReleased; // 0x288(0x08)
	UBoxComponent* Box; // 0x290(0x08)
	UStaticMeshComponent* Sphere; // 0x298(0x08)
	UCarriableComponent* Carriable; // 0x2a0(0x08)
	USphereComponent* UseSphere; // 0x2a8(0x08)
	FVector ThrowForce; // 0x2b0(0x0c)
	USoundBase* ImpactSound; // 0x2c0(0x08)
	float MaxLength; // 0x2c8(0x04)
	bool Dropped; // 0x2cc(0x01)

	void OnRep_Dropped();
	void ReleaseFromHanger();
	void ReceiveBeginPlay();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void Throw(FVector force);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void Drop();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void ExecuteUbergraph_BP_GunkSeed(int32_t EntryPoint);
};

