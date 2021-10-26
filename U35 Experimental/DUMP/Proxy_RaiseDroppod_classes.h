// BlueprintGeneratedClass Proxy_RaiseDroppod.Proxy_RaiseDroppod_C
// Size: 0x250 (Inherited: 0x220)
struct AProxy_RaiseDroppod_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProxyAssetComponent_C* ProxyAssetComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Actors To Sink; 
	UPROPERTY(BlueprintReadWrite) AActor* Class Filter; 

	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_RaiseDroppod(int32_t EntryPoint);
};

