// BlueprintGeneratedClass PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C
// Size: 0x380 (Inherited: 0x360)
struct APRJ_GuntowerLineProjectile_C : AGuntowerLineProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	UAudioComponent* GunTowerLineProjectile_Cue; // 0x368(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x370(0x08)
	UParticleSystemComponent* HitparticleSystem; // 0x378(0x08)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLineDestroy_Event_1(FHitResult Result);
	void ExecuteUbergraph_PRJ_GuntowerLineProjectile(int32_t EntryPoint);
};

