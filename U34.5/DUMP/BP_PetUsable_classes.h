// BlueprintGeneratedClass BP_PetUsable.BP_PetUsable_C
// Size: 0x140 (Inherited: 0x138)
struct UBP_PetUsable_C : UBPInstantUsable {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)

	bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
	void ReceiveBeginPlay();
	void OnUsedBy_Event_1(APlayerCharacter* User);
	void ExecuteUbergraph_BP_PetUsable(int32_t EntryPoint);
};

