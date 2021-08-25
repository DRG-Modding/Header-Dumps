// BlueprintGeneratedClass ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C
// Size: 0x5b5 (Inherited: 0x558)
struct AENE_Spider_Tank_Radioactive_C : AENE_Spider_Tank_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UBP_ConeAttackBase_C* RadiationAttack; // 0x560(0x08)
	struct USphereComponent* Sphere; // 0x568(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x570(0x08)
	struct UStaticMeshComponent* RadiationSphere; // 0x578(0x08)
	struct UAudioComponent* RadiationSound; // 0x580(0x08)
	float Radiation_Intensity_491FF937435DBE6C1B8926899616FADE; // 0x588(0x04)
	char Radiation__Direction_491FF937435DBE6C1B8926899616FADE; // 0x58c(0x01)
	char UnknownData_58D[0x3]; // 0x58d(0x03)
	struct UTimelineComponent* Radiation; // 0x590(0x08)
	float BaseLightIntensity; // 0x598(0x04)
	struct FName ScalarParam_Emissive; // 0x59c(0x08)
	float BaseEmissive; // 0x5a4(0x04)
	struct UMaterialInstanceDynamic* DynamicGlowbuttMat; // 0x5a8(0x08)
	float BaseLightRadius; // 0x5b0(0x04)
	bool RadiationAttackActive; // 0x5b4(0x01)

	void OnRep_RadiationAttackActive(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.OnRep_RadiationAttackActive
	void Radiation__FinishedFunc(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.Radiation__FinishedFunc
	void Radiation__UpdateFunc(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.Radiation__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.ReceiveBeginPlay
	void OnDeathBase(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.OnDeathBase
	void DoRadiationGlow(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.DoRadiationGlow
	void CancelSpecialAttack(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.CancelSpecialAttack
	void CancelRadionGlow(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.CancelRadionGlow
	void BndEvt__RadiationAttack_K2Node_ComponentBoundEvent_0_NameDelegate__DelegateSignature(struct FName nameValue); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.BndEvt__RadiationAttack_K2Node_ComponentBoundEvent_0_NameDelegate__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.OnFrozen
	void OnUnFrozen(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.OnUnFrozen
	void SpecialAttackFlow_2(); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.SpecialAttackFlow_2
	void ExecuteUbergraph_ENE_Spider_Tank_Radioactive(int32_t EntryPoint); // Function ENE_Spider_Tank_Radioactive.ENE_Spider_Tank_Radioactive_C.ExecuteUbergraph_ENE_Spider_Tank_Radioactive
};

