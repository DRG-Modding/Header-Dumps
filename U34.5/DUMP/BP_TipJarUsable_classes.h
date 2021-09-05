// BlueprintGeneratedClass BP_TipJarUsable.BP_TipJarUsable_C
// Size: 0x144 (Inherited: 0x138)
struct UBP_TipJarUsable_C : UBPInstantUsable {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	int32_t TipAmount; // 0x140(0x04)

	FText GetUseText(APlayerCharacter* User);
	bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
	void SetTipAmount(int32_t Credits);
	void ExecuteUbergraph_BP_TipJarUsable(int32_t EntryPoint);
};

