// BlueprintGeneratedClass PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C
// Size: 0x334 (Inherited: 0x2f0)
struct APRJ_Spider_Boss_Heavy_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UNiagaraComponent* Niagara; // 0x2f8(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x300(0x08)
	struct UDamageComponent* Damage; // 0x308(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x310(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x318(0x08)
	float MaxLevitation; // 0x320(0x04)
	float GravityScale; // 0x324(0x04)
	struct FRotator RotationRate; // 0x328(0x0c)

	void OnRep_RotationRate(); // Function PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C.OnRep_RotationRate
	void OnRep_GravityScale(); // Function PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C.OnRep_GravityScale
	void ReceiveBeginPlay(); // Function PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C.ReceiveBeginPlay
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C.OnImpacted
	void ExecuteUbergraph_PRJ_Spider_Boss_Heavy(int32_t EntryPoint); // Function PRJ_Spider_Boss_Heavy.PRJ_Spider_Boss_Heavy_C.ExecuteUbergraph_PRJ_Spider_Boss_Heavy
};

