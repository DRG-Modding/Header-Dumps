// BlueprintGeneratedClass ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C
// Size: 0x5b5 (Inherited: 0x558)
struct AENE_Spider_Tank_Radioactive_C : AENE_Spider_Tank_Generic_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	UBP_ConeAttackBase_C* RadiationAttack; // 0x560(0x08)
	USphereComponent* Sphere; // 0x568(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x570(0x08)
	UStaticMeshComponent* RadiationSphere; // 0x578(0x08)
	UAudioComponent* RadiationSound; // 0x580(0x08)
	float Radiation_Intensity_491FF937435DBE6C1B8926899616FADE; // 0x588(0x04)
	enum class ETimelineDirection Radiation__Direction_491FF937435DBE6C1B8926899616FADE; // 0x58c(0x01)
	UTimelineComponent* Radiation; // 0x590(0x08)
	float BaseLightIntensity; // 0x598(0x04)
	FName ScalarParam_Emissive; // 0x59c(0x08)
	float BaseEmissive; // 0x5a4(0x04)
	UMaterialInstanceDynamic* DynamicGlowbuttMat; // 0x5a8(0x08)
	float BaseLightRadius; // 0x5b0(0x04)
	bool RadiationAttackActive; // 0x5b4(0x01)

	void OnRep_RadiationAttackActive();
	void Radiation__FinishedFunc();
	void Radiation__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeathBase();
	void DoRadiationGlow();
	void CancelSpecialAttack();
	void CancelRadionGlow();
	void BndEvt__RadiationAttack_K2Node_ComponentBoundEvent_0_NameDelegate__DelegateSignature(FName nameValue);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void SpecialAttackFlow_2();
	void ExecuteUbergraph_ENE_Spider_Tank_Radioactive(int32_t EntryPoint);
};

