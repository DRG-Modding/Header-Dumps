// BlueprintGeneratedClass PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C
// Size: 0x340 (Inherited: 0x2f0)
struct APRJ_InfectedMuleGrenade_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UPointLightComponent* PointLight; // 0x2f8(0x08)
	struct UStaticMeshComponent* Mesh_Range; // 0x300(0x08)
	struct UAudioComponent* InfectedMuleGrenadeAlarm; // 0x308(0x08)
	struct UDamageComponent* Damage; // 0x310(0x08)
	struct UExplosionComponent* Explosion; // 0x318(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x320(0x08)
	bool HasExploaded; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	float TimeToExplode; // 0x32c(0x04)
	struct UParticleSystem* ExplosionParticles; // 0x330(0x08)
	struct USoundBase* ExplosionSound; // 0x338(0x08)

	void OnRep_HasExploaded(); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.OnRep_HasExploaded
	void ReceiveBeginPlay(); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.ReceiveBeginPlay
	void Delayed Sine(); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.Delayed Sine
	void OnImpacted(struct FHitResult HitResult); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.OnImpacted
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
	void ExecuteUbergraph_PRJ_InfectedMuleGrenade(int32_t EntryPoint); // Function PRJ_InfectedMuleGrenade.PRJ_InfectedMuleGrenade_C.ExecuteUbergraph_PRJ_InfectedMuleGrenade
};

