// BlueprintGeneratedClass Proxy_RotateMinehead.Proxy_RotateMinehead_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_RotateMinehead_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProxyAssetComponent_C* ProxyAssetComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Actors To Rotate; 

	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_RotateMinehead(int32_t EntryPoint);
};

