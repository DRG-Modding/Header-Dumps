// BlueprintGeneratedClass BP_GunkSeed.BP_GunkSeed_C
// Size: 0x2cd (Inherited: 0x260)
struct ABP_GunkSeed_C : AGem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UPointLightComponent* PointLight; // 0x268(0x08)
	struct UOutlineComponent* outline; // 0x270(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x278(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x280(0x08)
	struct UAudioComponent* GunkSeedReleased; // 0x288(0x08)
	struct UBoxComponent* Box; // 0x290(0x08)
	struct UStaticMeshComponent* Sphere; // 0x298(0x08)
	struct UCarriableComponent* Carriable; // 0x2a0(0x08)
	struct USphereComponent* UseSphere; // 0x2a8(0x08)
	struct FVector ThrowForce; // 0x2b0(0x0c)
	char UnknownData_2BC[0x4]; // 0x2bc(0x04)
	struct USoundBase* ImpactSound; // 0x2c0(0x08)
	float MaxLength; // 0x2c8(0x04)
	bool Dropped; // 0x2cc(0x01)

	void OnRep_Dropped(); // Function BP_GunkSeed.BP_GunkSeed_C.OnRep_Dropped
	void ReleaseFromHanger(); // Function BP_GunkSeed.BP_GunkSeed_C.ReleaseFromHanger
	void ReceiveBeginPlay(); // Function BP_GunkSeed.BP_GunkSeed_C.ReceiveBeginPlay
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_GunkSeed.BP_GunkSeed_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void Throw(struct FVector force); // Function BP_GunkSeed.BP_GunkSeed_C.Throw
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature(); // Function BP_GunkSeed.BP_GunkSeed_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature(); // Function BP_GunkSeed.BP_GunkSeed_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature
	void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_GunkSeed.BP_GunkSeed_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
	void Drop(); // Function BP_GunkSeed.BP_GunkSeed_C.Drop
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_GunkSeed.BP_GunkSeed_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
	void ExecuteUbergraph_BP_GunkSeed(int32_t EntryPoint); // Function BP_GunkSeed.BP_GunkSeed_C.ExecuteUbergraph_BP_GunkSeed
};

