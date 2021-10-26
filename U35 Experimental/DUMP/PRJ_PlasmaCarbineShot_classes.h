// BlueprintGeneratedClass PRJ_PlasmaCarbineShot.PRJ_PlasmaCarbineShot_C
// Size: 0x39f (Inherited: 0x338)
struct APRJ_PlasmaCarbineShot_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UParticleSystemComponent* P_ElectricPlasma; // 0x340(0x08)
	UNiagaraComponent* Niagara_Shield; // 0x348(0x08)
	UNiagaraComponent* Niagara_HOT; // 0x350(0x08)
	UNiagaraComponent* Niagara; // 0x358(0x08)
	UParticleSystemComponent* P_ShieldPlasma; // 0x360(0x08)
	UProjectileExplosion* ProjectileExplosionHot; // 0x368(0x08)
	UProjectileExplosion* ProjectileExplosionElectric; // 0x370(0x08)
	UProjectileExplosion* ProjectileExplosionSplash; // 0x378(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x380(0x08)
	UDamageComponent* Damage; // 0x388(0x08)
	UStaticMeshComponent* StaticMesh; // 0x390(0x08)
	int32_t MaxBounces; // 0x398(0x04)
	bool IsElectric; // 0x39c(0x01)
	bool IsBouncy; // 0x39d(0x01)
	bool IsHot; // 0x39e(0x01)

	void BounceFeedback();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void MakeBouncy();
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void DoEffects(FVector Location, FVector Normal);
	void DoOnSpawn();
	void OnInitialized();
	void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
	void CustomEvent(UItemUpgrade* Event);
	void ExecuteUbergraph_PRJ_PlasmaCarbineShot(int32_t EntryPoint);
};

