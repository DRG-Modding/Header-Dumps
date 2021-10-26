// BlueprintGeneratedClass BP_PetUsable.BP_PetUsable_C
// Size: 0x140 (Inherited: 0x138)
struct UBP_PetUsable_C : UBPInstantUsable {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 

	UFUNCTION(BlueprintCallable) bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnUsedBy_Event_1(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PetUsable(int32_t EntryPoint);
};

