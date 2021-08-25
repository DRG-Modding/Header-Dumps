// BlueprintGeneratedClass BP_SnowballItem.BP_SnowballItem_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct ABP_SnowballItem_C : AThrowableItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USceneComponent* Throwlocation; // 0x3e8(0x08)

	struct FVector GetThrowLocation(); // Function BP_SnowballItem.BP_SnowballItem_C.GetThrowLocation
	void ReceiveItemThrown(struct AThrowableActor* thrownActor); // Function BP_SnowballItem.BP_SnowballItem_C.ReceiveItemThrown
	void RemovedFromInventory(struct ACharacter* oldCharacter); // Function BP_SnowballItem.BP_SnowballItem_C.RemovedFromInventory
	void OnReceiveEquippedFinished(); // Function BP_SnowballItem.BP_SnowballItem_C.OnReceiveEquippedFinished
	void RecieveEquipped(); // Function BP_SnowballItem.BP_SnowballItem_C.RecieveEquipped
	void ExecuteUbergraph_BP_SnowballItem(int32_t EntryPoint); // Function BP_SnowballItem.BP_SnowballItem_C.ExecuteUbergraph_BP_SnowballItem
};

