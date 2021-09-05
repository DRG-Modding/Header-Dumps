// BlueprintGeneratedClass PRJ_HomingDrone.PRJ_HomingDrone_C
// Size: 0x3a9 (Inherited: 0x340)
struct APRJ_HomingDrone_C : AHomingDroneBomb {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	UParticleSystemComponent* P_Homing_Drone_Jets2; // 0x348(0x08)
	UParticleSystemComponent* P_Homing_Drone_Jets1; // 0x350(0x08)
	UParticleSystemComponent* Particle_Trail; // 0x358(0x08)
	UParticleSystemComponent* P_Homing_Drone_Jets; // 0x360(0x08)
	UAudioComponent* HomingDroneIdle_Cue; // 0x368(0x08)
	UEnemyComponent* enemy; // 0x370(0x08)
	UOutlineComponent* outline; // 0x378(0x08)
	USceneComponent* Scene; // 0x380(0x08)
	UPointLightComponent* Light_Exhaust; // 0x388(0x08)
	UStaticMeshComponent* MeshRocket; // 0x390(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x398(0x08)
	UDamageComponent* Damage; // 0x3a0(0x08)
	bool Explode; // 0x3a8(0x01)

	bool GetIsTargetable();
	FVector GetTargetCenterMass();
	UHealthComponentBase* GetTargetHealthComponent();
	void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	void OnRep_Explode();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_PRJ_HomingDrone(int32_t EntryPoint);
};

