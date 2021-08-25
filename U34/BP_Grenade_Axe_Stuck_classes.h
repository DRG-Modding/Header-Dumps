// BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C
// Size: 0x271 (Inherited: 0x220)
struct ABP_Grenade_Axe_Stuck_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct UInstantUsable* InstantUsable; // 0x230(0x08)
	struct UBoxComponent* Blade; // 0x238(0x08)
	struct UBoxComponent* Handle; // 0x240(0x08)
	struct UBoxComponent* WorldCollision; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	struct UStaticMeshComponent* SM_HandGrenade_M_Thrown2; // 0x258(0x08)
	struct AThrownGrenadeItem* AxeGrenadeItem; // 0x260(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x268(0x08)
	bool StandOnMe; // 0x270(0x01)

	void OnRep_StandOnMe(); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_StandOnMe
	void OnRep_AxeGrenadeItem(); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnRep_AxeGrenadeItem
	void UserConstructionScript(); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.UserConstructionScript
	void PickUpAxe(struct AThrownGrenadeItem* ThrownGrenadeItem); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.PickUpAxe
	void Detach Axe(); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Detach Axe
	void Attach(struct AActor* ParentActor, struct USceneComponent* ParentComponent, struct FName ParentSocketName, bool CanRetrieve); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.Attach
	void OnDestroyed_Event(struct AActor* DestroyedActor); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDestroyed_Event
	void OnDeath_Event(struct UHealthComponentBase* HealthComponent); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.OnDeath_Event
	void GoPhysical(bool PassThrough, bool CanRetrieve); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.GoPhysical
	void MakeStandable(bool CanRetrieve); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.MakeStandable
	void SetRetrieval(bool CanRetrieve); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.SetRetrieval
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32_t EntryPoint); // Function BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C.ExecuteUbergraph_BP_Grenade_Axe_Stuck
};

