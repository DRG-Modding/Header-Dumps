// BlueprintGeneratedClass PRJ_HomingDrone.PRJ_HomingDrone_C
// Size: 0x3a9 (Inherited: 0x340)
struct APRJ_HomingDrone_C : AHomingDroneBomb {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UParticleSystemComponent* P_Homing_Drone_Jets2; // 0x348(0x08)
	struct UParticleSystemComponent* P_Homing_Drone_Jets1; // 0x350(0x08)
	struct UParticleSystemComponent* Particle_Trail; // 0x358(0x08)
	struct UParticleSystemComponent* P_Homing_Drone_Jets; // 0x360(0x08)
	struct UAudioComponent* HomingDroneIdle_Cue; // 0x368(0x08)
	struct UEnemyComponent* enemy; // 0x370(0x08)
	struct UOutlineComponent* outline; // 0x378(0x08)
	struct USceneComponent* Scene; // 0x380(0x08)
	struct UPointLightComponent* Light_Exhaust; // 0x388(0x08)
	struct UStaticMeshComponent* MeshRocket; // 0x390(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x398(0x08)
	struct UDamageComponent* Damage; // 0x3a0(0x08)
	bool Explode; // 0x3a8(0x01)

	bool GetIsTargetable(); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.GetIsTargetable
	struct FVector GetTargetCenterMass(); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.GetTargetCenterMass
	struct UHealthComponentBase* GetTargetHealthComponent(); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.GetTargetHealthComponent
	void ShowDamageEffects(struct UParticleSystem* Particles, struct FVector Location, struct FRotator Orientation); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.ShowDamageEffects
	void OnRep_Explode(); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.OnRep_Explode
	void OnImpacted(struct FHitResult HitResult); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.OnImpacted
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ExecuteUbergraph_PRJ_HomingDrone(int32_t EntryPoint); // Function PRJ_HomingDrone.PRJ_HomingDrone_C.ExecuteUbergraph_PRJ_HomingDrone
};

