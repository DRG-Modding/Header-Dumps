// BlueprintGeneratedClass ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C
// Size: 0x4a0 (Inherited: 0x478)
struct AENE_Mactera_Shooter_Base_C : AAFlyingBug {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UDashPoints* DashPoints; // 0x480(0x08)
	struct UWeakpointGlowComponent* WeakpointGlowComponent; // 0x488(0x08)
	char DeathType; // 0x490(0x01)
	char UnknownData_491[0x7]; // 0x491(0x07)
	struct USoundCue* deathSound; // 0x498(0x08)

	void Death_Explode(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.Death_Explode
	bool ShouldExplode(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.ShouldExplode
	void Death_Normal(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.Death_Normal
	void Death_Weakpoint(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.Death_Weakpoint
	void OnRep_DeathType(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.OnRep_DeathType
	void UserConstructionScript(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.UserConstructionScript
	void StartFizzle(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.StartFizzle
	void OnMessageAI(struct FName TriggerName); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.OnMessageAI
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(struct UHealthComponent* HealthComponent, float damageAmount, struct UDamageClass* DamageClass, struct AActor* damageCause, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature
	void Receive_Alerted(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.Receive_Alerted
	void All_PlayAlertedSound(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.All_PlayAlertedSound
	void OnFrozen(struct AActor* Source); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.OnFrozen
	void MakeElite(); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.MakeElite
	void ExecuteUbergraph_ENE_Mactera_Shooter_Base(int32_t EntryPoint); // Function ENE_Mactera_Shooter_Base.ENE_Mactera_Shooter_Base_C.ExecuteUbergraph_ENE_Mactera_Shooter_Base
};

