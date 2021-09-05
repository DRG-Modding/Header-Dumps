// BlueprintGeneratedClass PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C
// Size: 0x334 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Heavy_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UNiagaraComponent* Niagara; // 0x2f8(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x300(0x08)
	UDamageComponent* Damage; // 0x308(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x310(0x08)
	UStaticMeshComponent* StaticMesh; // 0x318(0x08)
	float MaxLevitation; // 0x320(0x04)
	float GravityScale; // 0x324(0x04)
	FRotator RotationRate; // 0x328(0x0c)

	void OnRep_RotationRate();
	void OnRep_GravityScale();
	void ReceiveBeginPlay();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Spider_Boss_Heavy(int32_t EntryPoint);
};

