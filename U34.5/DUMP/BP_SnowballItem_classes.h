// BlueprintGeneratedClass BP_SnowballItem.BP_SnowballItem_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct ABP_SnowballItem_C : AThrowableItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	USceneComponent* Throwlocation; // 0x3e8(0x08)

	FVector GetThrowLocation();
	void ReceiveItemThrown(AThrowableActor* thrownActor);
	void RemovedFromInventory(ACharacter* oldCharacter);
	void OnReceiveEquippedFinished();
	void RecieveEquipped();
	void ExecuteUbergraph_BP_SnowballItem(int32_t EntryPoint);
};

