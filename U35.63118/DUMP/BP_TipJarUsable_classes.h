// BlueprintGeneratedClass BP_TipJarUsable.BP_TipJarUsable_C
// Size: 0x15c (Inherited: 0x150)
struct UBP_TipJarUsable_C : UBPInstantUsable {
	FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	int32_t TipAmount; // 0x158(0x04)

	FText GetUseText(APlayerCharacter* User);
	bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
	void SetTipAmount(int32_t Credits);
	void ExecuteUbergraph_BP_TipJarUsable(int32_t EntryPoint);
};

