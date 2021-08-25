// BlueprintGeneratedClass BP_TipJarUsable.BP_TipJarUsable_C
// Size: 0x144 (Inherited: 0x138)
struct UBP_TipJarUsable_C : UBPInstantUsable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	int32_t TipAmount; // 0x140(0x04)

	struct FText GetUseText(struct APlayerCharacter* User); // Function BP_TipJarUsable.BP_TipJarUsable_C.GetUseText
	bool BPCanUse(struct APlayerCharacter* User, struct USceneComponent* UseCollider); // Function BP_TipJarUsable.BP_TipJarUsable_C.BPCanUse
	void SetTipAmount(int32_t Credits); // Function BP_TipJarUsable.BP_TipJarUsable_C.SetTipAmount
	void ExecuteUbergraph_BP_TipJarUsable(int32_t EntryPoint); // Function BP_TipJarUsable.BP_TipJarUsable_C.ExecuteUbergraph_BP_TipJarUsable
};

