// BlueprintGeneratedClass ENE_Spider_Buffer.ENE_Spider_Buffer_C
// Size: 0x510 (Inherited: 0x4b4)
struct AENE_Spider_Buffer_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UCapsuleComponent* Capsule; // 0x4c0(0x08)
	struct UCapsuleComponent* Capsule1; // 0x4c8(0x08)
	struct UPointLightComponent* PointLight; // 0x4d0(0x08)
	struct UAudioComponent* BuffingLoop; // 0x4d8(0x08)
	struct UEnemyBufferComponent* EnemyBuffer; // 0x4e0(0x08)
	struct USimpleArmorDamageComponent* SimpleArmorDamage; // 0x4e8(0x08)
	float Emission_Time_7C918F0146C07DC2E610CBA4AA96FFB2; // 0x4f0(0x04)
	char Emission__Direction_7C918F0146C07DC2E610CBA4AA96FFB2; // 0x4f4(0x01)
	char UnknownData_4F5[0x3]; // 0x4f5(0x03)
	struct UTimelineComponent* Emission; // 0x4f8(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x500(0x08)
	float Emission Multiplier; // 0x508(0x04)
	float Emission Flash; // 0x50c(0x04)

	void UserConstructionScript(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.UserConstructionScript
	void Emission__FinishedFunc(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.Emission__FinishedFunc
	void Emission__UpdateFunc(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.Emission__UpdateFunc
	void OnRagdoll(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.OnRagdoll
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.OnUnFrozen
	void BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature(bool isBuffing); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.BndEvt__EnemyBuffer_K2Node_ComponentBoundEvent_1_BuffingChangedDelegate__DelegateSignature
	void HandleWeapointDeath(struct UFSDPhysicalMaterial* Material, struct UDamageClass* DamageClass); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.HandleWeapointDeath
	void Spawn Headshot Gibs(char DeathType); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.Spawn Headshot Gibs
	void TriggerWeakpointGlow(); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.TriggerWeakpointGlow
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, struct UPrimitiveComponent* Component, struct UFSDPhysicalMaterial* PhysMat, struct FName BoneName); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void ExecuteUbergraph_ENE_Spider_Buffer(int32_t EntryPoint); // Function ENE_Spider_Buffer.ENE_Spider_Buffer_C.ExecuteUbergraph_ENE_Spider_Buffer
};

