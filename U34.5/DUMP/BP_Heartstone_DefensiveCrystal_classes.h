// BlueprintGeneratedClass BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_Heartstone_DefensiveCrystal_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x228(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	UPointLightComponent* FillLight; // 0x238(0x08)
	UPointLightComponent* PointLight; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect3; // 0x248(0x08)
	UAudioComponent* AudioChargeUp; // 0x250(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	UAudioComponent* AudioGrow; // 0x260(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x268(0x08)
	UStaticMeshComponent* Spike_SM; // 0x270(0x08)
	UTerrainDetectComponent* TerrainDetect2; // 0x278(0x08)
	UAudioComponent* AudioBeam; // 0x280(0x08)
	UStaticMeshComponent* Beam; // 0x288(0x08)
	USceneComponent* BeamRoot; // 0x290(0x08)
	UBillboardComponent* AttackOrigin; // 0x298(0x08)
	UDamageComponent* Damage; // 0x2a0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float GrowLight_SoundVolume_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b0(0x04)
	float GrowLight_LightIntensity_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b4(0x04)
	enum class ETimelineDirection GrowLight__Direction_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b8(0x01)
	UTimelineComponent* GrowLight; // 0x2c0(0x08)
	AActor* JEB; // 0x2c8(0x08)
	FTimerHandle DamageTimer; // 0x2d0(0x08)
	bool IsAttackingJEB; // 0x2d8(0x01)
	float LightIntensity; // 0x2dc(0x04)
	ABP_EscortDestination_C* Heartstone; // 0x2e0(0x08)
	bool FinishedCarving; // 0x2e8(0x01)
	bool DoGrow; // 0x2e9(0x01)
	int32_t NumPointsRemoved; // 0x2ec(0x04)
	float LightStartIntensity; // 0x2f0(0x04)
	FVector LaserImpactLocation; // 0x2f4(0x0c)
	UParticleSystemComponent* LaserImpactParticles; // 0x300(0x08)

	void OnRep_NumPointsRemoved();
	void IsDestroyed(bool isDestoyed);
	void OnRep_DoGrow();
	void OnRep_FinishedCarving();
	void OnRep_IsAttackingJEB();
	void CheckLOStoJEB(bool HaveLOStoJEB);
	void GrowLight__FinishedFunc();
	void GrowLight__UpdateFunc();
	void ReceiveBeginPlay();
	void CheckIfCanAttackJEB();
	void DamageJEB();
	void Grow();
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	void TurnOnBeamDamage();
	void MoveMesh();
	void ShootBeam();
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void ReceiveDestroyed();
	void StopBeam();
	void DisableBeamer();
	void ExecuteUbergraph_BP_Heartstone_DefensiveCrystal(int32_t EntryPoint);
};

