// BlueprintGeneratedClass BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_TipJar_Base_Blueprint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBP_TipJarUsable_C* BP_TipJarUsable; // 0x228(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x230(0x08)
	struct UWidgetComponent* Widget; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct USkeletalMeshComponent* SK_TipMachine; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot1; // 0x250(0x08)
	struct ASpaceRigBar* BarReference; // 0x258(0x08)
	int32_t TipAmount; // 0x260(0x04)

	void All_PlayTip(struct APlayerCharacter* User, int32_t AnimIndex); // Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.All_PlayTip
	void BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_TipJar_Base_Blueprint(int32_t EntryPoint); // Function BP_TIpJar_Base_Blueprint.BP_TipJar_Base_Blueprint_C.ExecuteUbergraph_BP_TipJar_Base_Blueprint
};

