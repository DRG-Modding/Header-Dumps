// BlueprintGeneratedClass PRJ_BaseGooProjectile.PRJ_BaseGooProjectile_C
// Size: 0x3a8 (Inherited: 0x340)
struct APRJ_BaseGooProjectile_C : AGooGunProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	UAudioComponent* GooCannonProjectileIdle_Cue; // 0x348(0x08)
	UNiagaraComponent* Niagara; // 0x350(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x358(0x08)
	UDamageComponent* Damage; // 0x360(0x08)
	UStaticMeshComponent* StaticMesh; // 0x368(0x08)
	int32_t MaxBounces; // 0x370(0x04)
	AGooGunPuddle* Puddle; // 0x378(0x08)
	FVector PuddleSize; // 0x380(0x0c)
	bool HasGravityOverclock; // 0x38c(0x01)
	bool HasBuckShotOverclock; // 0x38d(0x01)
	AGooGunPuddle* SpawnedPuddle; // 0x390(0x08)
	bool ExplosivePuddles; // 0x398(0x01)
	USoundBase* CreatureImpactSound; // 0x3a0(0x08)

	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void MakeBouncy();
	void DoEffects(FVector Location, FVector Normal);
	void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
	void DestroyProjectile();
	void Client_PlayImpactEffect();
	void PlayImpact(AActor* Actor);
	void ExecuteUbergraph_PRJ_BaseGooProjectile(int32_t EntryPoint);
};

