// BlueprintGeneratedClass BP_GooCannon_GooPuddle.BP_GooCannon_GooPuddle_C
// Size: 0x321 (Inherited: 0x268)
struct ABP_GooCannon_GooPuddle_C : AGooGunPuddle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x270(0x08)
	UDamageComponent* Damage; // 0x278(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x280(0x08)
	UNiagaraComponent* Niagara; // 0x288(0x08)
	USphereComponent* Sphere3; // 0x290(0x08)
	USphereComponent* Sphere2; // 0x298(0x08)
	USphereComponent* Sphere1; // 0x2a0(0x08)
	USphereComponent* Sphere; // 0x2a8(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2b0(0x08)
	USceneComponent* Scene; // 0x2b8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2c0(0x08)
	float Timeline_0_Travel_B8070DF14C3D466D9EB0F2B093A50381; // 0x2c8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B8070DF14C3D466D9EB0F2B093A50381; // 0x2cc(0x01)
	UTimelineComponent* Timeline_1; // 0x2d0(0x08)
	float Time; // 0x2d8(0x04)
	AWPN_GooCannon_C* SuckToActor; // 0x2e0(0x08)
	FTransform InitialSuckToActorTransform; // 0x2f0(0x30)
	bool CanExplode; // 0x320(0x01)

	void ExplodePuddle();
	void OnRep_SuckToActor();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnStatusEffectAdded(FGooPuddleStatusEffectTrigger Trigger);
	void ReceiveBeginPlay();
	void CustomEvent_1();
	void OnSuckToActor();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void RemovePuddle();
	void ExecuteUbergraph_BP_GooCannon_GooPuddle(int32_t EntryPoint);
};

