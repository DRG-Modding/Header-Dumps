// BlueprintGeneratedClass PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C
// Size: 0x390 (Inherited: 0x2f0)
struct APRJ_Grenade_StickySmall_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UExplosionComponent* Explosion; // 0x2f8(0x08)
	struct UDamageComponent* BoomDamage; // 0x300(0x08)
	struct UDamageComponent* SpikeDamage; // 0x308(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x310(0x08)
	struct UParticleSystemComponent* Trail; // 0x318(0x08)
	struct UStaticMeshComponent* mesh_front; // 0x320(0x08)
	float ExplosionDelay; // 0x328(0x04)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct USoundBase* ExplosionSound; // 0x330(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x338(0x08)
	struct FTimerHandle BeepTimer; // 0x340(0x08)
	struct AActor* StickyTarget; // 0x348(0x08)
	struct UPrimitiveComponent* StickyTargetHitComponent; // 0x350(0x08)
	struct USoundMix* ExplosionMixModifier; // 0x358(0x08)
	float ExplosionDuckingTime; // 0x360(0x04)
	float ExplosionDuckMinDistance; // 0x364(0x04)
	float ExplosionDuckMaxDistance; // 0x368(0x04)
	char UnknownData_36C[0x4]; // 0x36c(0x04)
	struct FStickeyAttach StickyAttach; // 0x370(0x20)

	void OnRep_stick(); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_stick
	void OnImpacted(struct FHitResult HitResult); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted
	void ReceiveBeginPlay(); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay
	void Boom(); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom
	void Beep(); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep
	void ExecuteUbergraph_PRJ_Grenade_StickySmall(int32_t EntryPoint); // Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall
};

