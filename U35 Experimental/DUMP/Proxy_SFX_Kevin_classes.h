// BlueprintGeneratedClass Proxy_SFX_Kevin.Proxy_SFX_Kevin_C
// Size: 0x238 (Inherited: 0x220)
struct AProxy_SFX_Kevin_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProxyAssetComponent_C* ProxyAssetComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void Sound Finished Event();
	UFUNCTION(BlueprintCallable) void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_SFX_Kevin(int32_t EntryPoint);
};

