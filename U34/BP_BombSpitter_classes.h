// BlueprintGeneratedClass BP_BombSpitter.BP_BombSpitter_C
// Size: 0x2a8 (Inherited: 0x220)
struct ABP_BombSpitter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* BombSpitterMesh; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x238(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x240(0x08)
	struct UStaticMeshComponent* ProjectileFake; // 0x248(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x250(0x08)
	struct USceneComponent* ProjectileSpawnLocation; // 0x258(0x08)
	struct UCapsuleComponent* Capsule; // 0x260(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float Grow_Scale_E6213CB8461859CFDD77B8B3B4302959; // 0x278(0x04)
	char Grow__Direction_E6213CB8461859CFDD77B8B3B4302959; // 0x27c(0x01)
	char UnknownData_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* Grow; // 0x280(0x08)
	bool IsReady; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	float ReloadTime; // 0x28c(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x290(0x08)
	struct FMulticastInlineDelegate OnChangeState; // 0x298(0x10)

	void OnRep_IsReady(); // Function BP_BombSpitter.BP_BombSpitter_C.OnRep_IsReady
	void UserConstructionScript(); // Function BP_BombSpitter.BP_BombSpitter_C.UserConstructionScript
	void Grow__FinishedFunc(); // Function BP_BombSpitter.BP_BombSpitter_C.Grow__FinishedFunc
	void Grow__UpdateFunc(); // Function BP_BombSpitter.BP_BombSpitter_C.Grow__UpdateFunc
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_BombSpitter.BP_BombSpitter_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_BombSpitter.BP_BombSpitter_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_BombSpitter.BP_BombSpitter_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_BombSpitter.BP_BombSpitter_C.OnTerrainPointRemoved
	void Shoot(); // Function BP_BombSpitter.BP_BombSpitter_C.Shoot
	void ExecuteUbergraph_BP_BombSpitter(int32_t EntryPoint); // Function BP_BombSpitter.BP_BombSpitter_C.ExecuteUbergraph_BP_BombSpitter
	void OnChangeState__DelegateSignature(bool Closed, bool Open); // Function BP_BombSpitter.BP_BombSpitter_C.OnChangeState__DelegateSignature
};

