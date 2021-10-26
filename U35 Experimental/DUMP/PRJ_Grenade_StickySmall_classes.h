// BlueprintGeneratedClass PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C
// Size: 0x3d8 (Inherited: 0x338)
struct APRJ_Grenade_StickySmall_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UExplosionComponent* Explosion; // 0x340(0x08)
	UDamageComponent* BoomDamage; // 0x348(0x08)
	UDamageComponent* SpikeDamage; // 0x350(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x358(0x08)
	UParticleSystemComponent* Trail; // 0x360(0x08)
	UStaticMeshComponent* mesh_front; // 0x368(0x08)
	float ExplosionDelay; // 0x370(0x04)
	USoundBase* ExplosionSound; // 0x378(0x08)
	UParticleSystem* ExplosionParticles; // 0x380(0x08)
	FTimerHandle BeepTimer; // 0x388(0x08)
	AActor* StickyTarget; // 0x390(0x08)
	UPrimitiveComponent* StickyTargetHitComponent; // 0x398(0x08)
	USoundMix* ExplosionMixModifier; // 0x3a0(0x08)
	float ExplosionDuckingTime; // 0x3a8(0x04)
	float ExplosionDuckMinDistance; // 0x3ac(0x04)
	float ExplosionDuckMaxDistance; // 0x3b0(0x04)
	FStickeyAttach StickyAttach; // 0x3b8(0x20)

	void OnRep_Stick();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void Boom();
	void Beep();
	void ExecuteUbergraph_PRJ_Grenade_StickySmall(int32_t EntryPoint);
};

