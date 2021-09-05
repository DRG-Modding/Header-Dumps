// BlueprintGeneratedClass BP_ExplosiveBarrel.BP_ExplosiveBarrel_C
// Size: 0x2a8 (Inherited: 0x248)
struct ABP_ExplosiveBarrel_C : ACarriableItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x250(0x08)
	UBoxComponent* Box; // 0x258(0x08)
	USphereComponent* Sphere; // 0x260(0x08)
	UStaticMeshComponent* StaticMesh; // 0x268(0x08)
	UCarriableComponent* Carriable; // 0x270(0x08)
	UInstantUsable* InstantUsable; // 0x278(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x280(0x08)
	UDamageComponent* Damage; // 0x288(0x08)
	bool Explode; // 0x290(0x01)
	float SpeedThreshold; // 0x294(0x04)
	bool Init; // 0x298(0x01)
	FVector ThrowForce; // 0x29c(0x0c)

	void OnRep_Explode();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
	void Throw(FVector force);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void ExecuteUbergraph_BP_ExplosiveBarrel(int32_t EntryPoint);
};

