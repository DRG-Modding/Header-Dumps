// BlueprintGeneratedClass PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C
// Size: 0x380 (Inherited: 0x360)
struct APRJ_GuntowerLineProjectile_C : AGuntowerLineProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UAudioComponent* GunTowerLineProjectile_Cue; // 0x368(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x370(0x08)
	struct UParticleSystemComponent* HitparticleSystem; // 0x378(0x08)

	void UserConstructionScript(); // Function PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C.ReceiveBeginPlay
	void OnLineDestroy_Event_1(struct FHitResult Result); // Function PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C.OnLineDestroy_Event_1
	void ExecuteUbergraph_PRJ_GuntowerLineProjectile(int32_t EntryPoint); // Function PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C.ExecuteUbergraph_PRJ_GuntowerLineProjectile
};

