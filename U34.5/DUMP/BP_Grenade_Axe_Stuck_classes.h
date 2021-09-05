// BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C
// Size: 0x281 (Inherited: 0x230)
struct ABP_Grenade_Axe_Stuck_C : AFSDPhysicsActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x238(0x08)
	UInstantUsable* InstantUsable; // 0x240(0x08)
	UBoxComponent* Blade; // 0x248(0x08)
	UBoxComponent* Handle; // 0x250(0x08)
	UBoxComponent* WorldCollision; // 0x258(0x08)
	USphereComponent* Sphere; // 0x260(0x08)
	UStaticMeshComponent* SM_HandGrenade_M_Thrown2; // 0x268(0x08)
	AThrownGrenadeItem* AxeGrenadeItem; // 0x270(0x08)
	UMaterialInstanceDynamic* Dynamic Material; // 0x278(0x08)
	bool StandOnMe; // 0x280(0x01)

	void OnRep_StandOnMe();
	void OnRep_AxeGrenadeItem();
	void UserConstructionScript();
	void PickUpAxe(AThrownGrenadeItem* ThrownGrenadeItem);
	void Detach Axe();
	void Attach(AActor* ParentActor, USceneComponent* ParentComponent, FName ParentSocketName, bool CanRetrieve);
	void OnDestroyed_Event(AActor* DestroyedActor);
	void OnDeath_Event(UHealthComponentBase* HealthComponent);
	void GoPhysical(bool PassThrough, bool CanRetrieve);
	void MakeStandable(bool CanRetrieve);
	void SetRetrieval(bool CanRetrieve);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32_t EntryPoint);
};

