// BlueprintGeneratedClass ENE_Bomber.ENE_Bomber_C
// Size: 0x581 (Inherited: 0x540)
struct AENE_Bomber_C : ABomber {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	UDashPoints* DashPoints; // 0x548(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x550(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x558(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x560(0x08)
	int32_t Dashes; // 0x568(0x04)
	float Projectile Velocity Multiplier; // 0x56c(0x04)
	float Initial Projectile Speed; // 0x570(0x04)
	FVector Projectile Goal Offset; // 0x574(0x0c)
	bool TripleProjectile; // 0x580(0x01)

	void InitCharge();
	void ReceiveBeginPlay();
	void OnMessageAI(FName TriggerName);
	void StartFizzle();
	void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
	void OnStartDeathPanic();
	void OnFrozen(AActor* Source);
	void ExecuteUbergraph_ENE_Bomber(int32_t EntryPoint);
};

