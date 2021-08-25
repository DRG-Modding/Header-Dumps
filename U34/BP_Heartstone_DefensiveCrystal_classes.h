// BlueprintGeneratedClass BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C
// Size: 0x308 (Inherited: 0x220)
struct ABP_Heartstone_DefensiveCrystal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x228(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	struct UPointLightComponent* FillLight; // 0x238(0x08)
	struct UPointLightComponent* PointLight; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect3; // 0x248(0x08)
	struct UAudioComponent* AudioChargeUp; // 0x250(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	struct UAudioComponent* AudioGrow; // 0x260(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x268(0x08)
	struct UStaticMeshComponent* Spike_SM; // 0x270(0x08)
	struct UTerrainDetectComponent* TerrainDetect2; // 0x278(0x08)
	struct UAudioComponent* AudioBeam; // 0x280(0x08)
	struct UStaticMeshComponent* Beam; // 0x288(0x08)
	struct USceneComponent* BeamRoot; // 0x290(0x08)
	struct UBillboardComponent* AttackOrigin; // 0x298(0x08)
	struct UDamageComponent* Damage; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	float GrowLight_SoundVolume_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b0(0x04)
	float GrowLight_LightIntensity_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b4(0x04)
	char GrowLight__Direction_AB5D1D304F66D83F8F0760B4A43F79FC; // 0x2b8(0x01)
	char UnknownData_2B9[0x7]; // 0x2b9(0x07)
	struct UTimelineComponent* GrowLight; // 0x2c0(0x08)
	struct AActor* JEB; // 0x2c8(0x08)
	struct FTimerHandle DamageTimer; // 0x2d0(0x08)
	bool IsAttackingJEB; // 0x2d8(0x01)
	char UnknownData_2D9[0x3]; // 0x2d9(0x03)
	float LightIntensity; // 0x2dc(0x04)
	struct ABP_EscortDestination_C* Heartstone; // 0x2e0(0x08)
	bool FinishedCarving; // 0x2e8(0x01)
	bool DoGrow; // 0x2e9(0x01)
	char UnknownData_2EA[0x2]; // 0x2ea(0x02)
	int32_t NumPointsRemoved; // 0x2ec(0x04)
	float LightStartIntensity; // 0x2f0(0x04)
	struct FVector LaserImpactLocation; // 0x2f4(0x0c)
	struct UParticleSystemComponent* LaserImpactParticles; // 0x300(0x08)

	void OnRep_NumPointsRemoved(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.OnRep_NumPointsRemoved
	void IsDestroyed(bool isDestoyed); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.IsDestroyed
	void OnRep_DoGrow(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.OnRep_DoGrow
	void OnRep_FinishedCarving(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.OnRep_FinishedCarving
	void OnRep_IsAttackingJEB(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.OnRep_IsAttackingJEB
	void CheckLOStoJEB(bool HaveLOStoJEB); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.CheckLOStoJEB
	void GrowLight__FinishedFunc(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.GrowLight__FinishedFunc
	void GrowLight__UpdateFunc(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.GrowLight__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.ReceiveBeginPlay
	void CheckIfCanAttackJEB(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.CheckIfCanAttackJEB
	void DamageJEB(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.DamageJEB
	void Grow(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.Grow
	void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature
	void TurnOnBeamDamage(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.TurnOnBeamDamage
	void MoveMesh(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.MoveMesh
	void ShootBeam(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.ShootBeam
	void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void ReceiveDestroyed(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.ReceiveDestroyed
	void StopBeam(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.StopBeam
	void DisableBeamer(); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.DisableBeamer
	void ExecuteUbergraph_BP_Heartstone_DefensiveCrystal(int32_t EntryPoint); // Function BP_Heartstone_DefensiveCrystal.BP_Heartstone_DefensiveCrystal_C.ExecuteUbergraph_BP_Heartstone_DefensiveCrystal
};

