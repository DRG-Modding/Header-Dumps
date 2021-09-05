// BlueprintGeneratedClass PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_InfectedMuleGrenade_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UPointLightComponent* PointLight; // 0x2f8(0x08)
	UStaticMeshComponent* Mesh_Range; // 0x300(0x08)
	UAudioComponent* InfectedMuleGrenadeAlarm; // 0x308(0x08)
	UDamageComponent* Damage; // 0x310(0x08)
	UExplosionComponent* Explosion; // 0x318(0x08)
	UStaticMeshComponent* StaticMesh; // 0x320(0x08)
	bool HasExploaded; // 0x328(0x01)
	float TimeToExplode; // 0x32c(0x04)
	UParticleSystem* ExplosionParticles; // 0x330(0x08)
	USoundBase* ExplosionSound; // 0x338(0x08)

	void OnRep_HasExploaded();
	void ReceiveBeginPlay();
	void Delayed Sine();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void ExecuteUbergraph_PRJ_InfectedMuleGrenade(int32_t EntryPoint);
};

