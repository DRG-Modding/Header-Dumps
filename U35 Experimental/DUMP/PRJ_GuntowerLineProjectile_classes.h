// BlueprintGeneratedClass PRJ_GuntowerLineProjectile.PRJ_GuntowerLineProjectile_C
// Size: 0x380 (Inherited: 0x360)
struct APRJ_GuntowerLineProjectile_C : AGuntowerLineProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* GunTowerLineProjectile_Cue; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* HitparticleSystem; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnLineDestroy_Event_1(FHitResult Result);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_GuntowerLineProjectile(int32_t EntryPoint);
};

