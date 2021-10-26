// BlueprintGeneratedClass BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_SentryLoadoutProxy_C : ALoadoutItemProxy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void RecieveUnequipped();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SentryLoadoutProxy(int32_t EntryPoint);
};

