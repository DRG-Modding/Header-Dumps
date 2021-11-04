// BlueprintGeneratedClass BP_MainShieldActvator.BP_MainShieldActvator_C
// Size: 0x29c (Inherited: 0x220)
struct ABP_MainShieldActvator_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UStaticMeshComponent* Light; // 0x230(0x08)
	UStaticMeshComponent* Tube; // 0x238(0x08)
	UStaticMeshComponent* Box; // 0x240(0x08)
	UArrowComponent* BarrelDirection; // 0x248(0x08)
	UCapsuleComponent* Capsule; // 0x250(0x08)
	UStaticMeshComponent* StaticMesh; // 0x258(0x08)
	USingleUsableComponent* SingleUsable; // 0x260(0x08)
	USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	FMulticastInlineDelegate Activated; // 0x270(0x10)
	float Launch force; // 0x280(0x04)
	ABP_ShieldBattery_C* SpawnedBattery; // 0x288(0x08)
	UMaterialInstanceDynamic* Mid; // 0x290(0x08)
	float LightIntensity; // 0x298(0x04)

	void Expose();
	void OnRep_SpawnedBattery();
	void UserConstructionScript();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_BP_MainShieldActvator(int32_t EntryPoint);
	void Activated__DelegateSignature();
};

