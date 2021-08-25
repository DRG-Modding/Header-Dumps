// BlueprintGeneratedClass ENE_Spider_Exploding.ENE_Spider_Exploding_C
// Size: 0x4ea (Inherited: 0x4b4)
struct AENE_Spider_Exploding_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UDamageComponent* Damage; // 0x4c0(0x08)
	struct USphereComponent* Sphere; // 0x4c8(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x4d0(0x08)
	bool Exploded; // 0x4d8(0x01)
	bool IsFleeing_1; // 0x4d9(0x01)
	char UnknownData_4DA[0x6]; // 0x4da(0x06)
	struct UParticleSystem* ExplosionParticles; // 0x4e0(0x08)
	bool ExplodeOnDeath; // 0x4e8(0x01)
	bool NearbyExplodersFlee; // 0x4e9(0x01)

	bool GetIsTargetable(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.GetIsTargetable
	bool ShouldExplode(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.ShouldExplode
	float GetDistanceToLocalPlayer(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.GetDistanceToLocalPlayer
	void DamageAndCarve(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.DamageAndCarve
	void PlayRumbeAndShake(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.PlayRumbeAndShake
	void MakeNearbyExplodersFlee(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.MakeNearbyExplodersFlee
	void OnRep_Exploded(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.OnRep_Exploded
	void Explode(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.Explode
	void OnExploded(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.OnExploded
	void OnMessageAI(struct FName TriggerName); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.OnMessageAI
	void Play Burn Death(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.Play Burn Death
	void Play Body Death Effects(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.Play Body Death Effects
	void SetRagdollImpulse(struct UDamageClass* DamageClass, struct UFSDPhysicalMaterial* PhysMat); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.SetRagdollImpulse
	void Spawn Headshot Gibs(char DeathType); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.Spawn Headshot Gibs
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.OnUnFrozen
	void Play Frozen Death(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.Play Frozen Death
	void DisableExplosion(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.DisableExplosion
	void StopMontagesOnDeath(); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.StopMontagesOnDeath
	void ExecuteUbergraph_ENE_Spider_Exploding(int32_t EntryPoint); // Function ENE_Spider_Exploding.ENE_Spider_Exploding_C.ExecuteUbergraph_ENE_Spider_Exploding
};

