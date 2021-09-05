// BlueprintGeneratedClass BP_BombSpitter.BP_BombSpitter_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_BombSpitter_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USkeletalMeshComponent* BombSpitterMesh; // 0x228(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	UStaticMeshComponent* ProjectileFake; // 0x248(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	USceneComponent* ProjectileSpawnLocation; // 0x258(0x08)
	UCapsuleComponent* Capsule; // 0x260(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959; // 0x278(0x04)
	enum class ETimelineDirection Grow__Direction_E6213CB8461859CFDD77B8B3B4302959; // 0x27c(0x01)
	UTimelineComponent* Grow; // 0x280(0x08)
	bool IsReady; // 0x288(0x01)
	float ReloadTime; // 0x28c(0x04)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x290(0x08)
	FMulticastInlineDelegate OnChangeState; // 0x298(0x10)

	void OnRep_IsReady();
	void UserConstructionScript();
	void Grow__FinishedFunc();
	void Grow__UpdateFunc();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnTerrainPointRemoved();
	void Shoot();
	void ExecuteUbergraph_BP_BombSpitter(int32_t EntryPoint);
	void OnChangeState__DelegateSignature(bool Closed, bool Open);
};

