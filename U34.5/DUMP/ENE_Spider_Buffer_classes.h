// BlueprintGeneratedClass ENE_Spider_Buffer.ENE_Spider_Buffer_C
// Size: 0x510 (Inherited: 0x4b4)
struct AENE_Spider_Buffer_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UCapsuleComponent* Capsule; // 0x4c0(0x08)
	UCapsuleComponent* Capsule1; // 0x4c8(0x08)
	UPointLightComponent* PointLight; // 0x4d0(0x08)
	UAudioComponent* BuffingLoop; // 0x4d8(0x08)
	UEnemyBufferComponent* EnemyBuffer; // 0x4e0(0x08)
	USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4e8(0x08)
	float Emission_Time_7C918F0146C07DC2E610CBA4AA96FFB2; // 0x4f0(0x04)
	enum class ETimelineDirection Emission__Direction_7C918F0146C07DC2E610CBA4AA96FFB2; // 0x4f4(0x01)
	UTimelineComponent* Emission; // 0x4f8(0x08)
	UMaterialInstanceDynamic* Dynamic Material; // 0x500(0x08)
	float Emission Multiplier; // 0x508(0x04)
	float Emission Flash; // 0x50c(0x04)

	void UserConstructionScript();
	void Emission__FinishedFunc();
	void Emission__UpdateFunc();
	void OnRagdoll();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature(bool isBuffing);
	void HandleWeapointDeath(UFSDPhysicalMaterial* Material, UDamageClass* DamageClass);
	void Spawn Headshot Gibs(enum class Spider_DeathType DeathType);
	void TriggerWeakpointGlow();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_ENE_Spider_Buffer(int32_t EntryPoint);
};

