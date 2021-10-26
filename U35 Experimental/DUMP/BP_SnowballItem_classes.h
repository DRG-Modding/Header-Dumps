// BlueprintGeneratedClass BP_SnowballItem.BP_SnowballItem_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct ABP_SnowballItem_C : AThrowableItem {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Throwlocation; 

	UFUNCTION(BlueprintCallable) FVector GetThrowLocation();
	UFUNCTION(BlueprintCallable) void ReceiveItemThrown(AThrowableActor* thrownActor);
	UFUNCTION(BlueprintCallable) void RemovedFromInventory(ACharacter* oldCharacter);
	UFUNCTION(BlueprintCallable) void OnReceiveEquippedFinished();
	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SnowballItem(int32_t EntryPoint);
};

