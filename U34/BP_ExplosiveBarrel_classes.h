// BlueprintGeneratedClass BP_ExplosiveBarrel.BP_ExplosiveBarrel_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_ExplosiveBarrel_C : ACarriableItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	struct UBoxComponent* Box; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	struct UCarriableComponent* Carriable; // 0x270(0x08)
	struct UInstantUsable* InstantUsable; // 0x278(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x280(0x08)
	struct UDamageComponent* Damage; // 0x288(0x08)
	bool Explode; // 0x290(0x01)
	char UnknownData_291[0x3]; // 0x291(0x03)
	float SpeedThreshold; // 0x294(0x04)
	bool Init; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	struct FVector ThrowForce; // 0x29c(0x0c)

	void OnRep_Explode(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.OnRep_Explode
	void ReceiveBeginPlay(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ReceiveBeginPlay
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature(); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature
	void Throw(struct FVector force); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.Throw
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void ExecuteUbergraph_BP_ExplosiveBarrel(int32_t EntryPoint); // Function BP_ExplosiveBarrel.BP_ExplosiveBarrel_C.ExecuteUbergraph_BP_ExplosiveBarrel
};

