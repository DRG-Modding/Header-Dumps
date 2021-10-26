// BlueprintGeneratedClass BP_ShieldGenerator_LoadoutProxy.BP_ShieldGenerator_LoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_ShieldGenerator_LoadoutProxy_C : ALoadoutItemProxy {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void RecieveEquipped();
	UFUNCTION(BlueprintCallable) void RecieveUnequipped();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_ShieldGenerator_LoadoutProxy(int32_t EntryPoint);
};

