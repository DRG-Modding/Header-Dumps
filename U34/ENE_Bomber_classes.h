// BlueprintGeneratedClass ENE_Bomber.ENE_Bomber_C
// Size: 0x581 (Inherited: 0x540)
struct AENE_Bomber_C : ABomber {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UDashPoints* DashPoints; // 0x548(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x550(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x558(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x560(0x08)
	int32_t Dashes; // 0x568(0x04)
	float Projectile Velocity Multiplier; // 0x56c(0x04)
	float Initial Projectile Speed; // 0x570(0x04)
	struct FVector Projectile Goal Offset; // 0x574(0x0c)
	bool TripleProjectile; // 0x580(0x01)

	void InitCharge(); // Function ENE_Bomber.ENE_Bomber_C.InitCharge
	void ReceiveBeginPlay(); // Function ENE_Bomber.ENE_Bomber_C.ReceiveBeginPlay
	void OnMessageAI(struct FName TriggerName); // Function ENE_Bomber.ENE_Bomber_C.OnMessageAI
	void StartFizzle(); // Function ENE_Bomber.ENE_Bomber_C.StartFizzle
	void BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(struct FName Name); // Function ENE_Bomber.ENE_Bomber_C.BndEvt__ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature
	void OnStartDeathPanic(); // Function ENE_Bomber.ENE_Bomber_C.OnStartDeathPanic
	void OnFrozen(struct AActor* Source); // Function ENE_Bomber.ENE_Bomber_C.OnFrozen
	void ExecuteUbergraph_ENE_Bomber(int32_t EntryPoint); // Function ENE_Bomber.ENE_Bomber_C.ExecuteUbergraph_ENE_Bomber
};

