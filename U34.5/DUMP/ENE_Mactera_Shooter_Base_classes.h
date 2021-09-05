// BlueprintGeneratedClass ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C
// Size: 0x4a0 (Inherited: 0x478)
struct AENE_Mactera_Shooter_Base_C : AAFlyingBug {
	FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	UDashPoints* DashPoints; // 0x480(0x08)
	UWeakpointGlowComponent* WeakpointGlowComponent; // 0x488(0x08)
	enum class MacteraDeathTypes DeathType; // 0x490(0x01)
	USoundCue* deathSound; // 0x498(0x08)

	void Death_Explode();
	bool ShouldExplode();
	void Death_Normal();
	void Death_Weakpoint();
	void OnRep_DeathType();
	void UserConstructionScript();
	void StartFizzle();
	void OnMessageAI(FName TriggerName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void Receive_Alerted();
	void All_PlayAlertedSound();
	void OnFrozen(AActor* Source);
	void MakeElite();
	void ExecuteUbergraph_ENE_Mactera_Shooter_Base(int32_t EntryPoint);
};

