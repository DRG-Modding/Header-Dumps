// BlueprintGeneratedClass Proxy_SFX_Gold.Proxy_SFX_Gold_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_SFX_Gold_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProxyAssetComponent_C* ProxyAssetComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<USoundCue*> Gold Sound Cues; 

	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void Sound Finished Event();
	UFUNCTION(BlueprintCallable) void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_SFX_Gold(int32_t EntryPoint);
};

