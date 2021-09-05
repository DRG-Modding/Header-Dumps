// BlueprintGeneratedClass ENE_Spider_Grunt_Rock.ENE_Spider_Grunt_Rock_C
// Size: 0x4e0 (Inherited: 0x4d8)
struct AENE_Spider_Grunt_Rock_C : AENE_Spider_Grunt_Normal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)

	bool GetIsTargetable();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void Play Body Death Effects();
	void ExecuteUbergraph_ENE_Spider_Grunt_Rock(int32_t EntryPoint);
};

