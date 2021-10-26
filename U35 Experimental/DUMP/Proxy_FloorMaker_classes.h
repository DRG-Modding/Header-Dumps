// BlueprintGeneratedClass Proxy_FloorMaker.Proxy_FloorMaker_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_FloorMaker_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UProxyAssetComponent_C* ProxyAssetComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 
	UPROPERTY(BlueprintReadWrite) int32_t Platform Count; 
	UPROPERTY(BlueprintReadWrite) float Projectile Interval; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Spawn Timer; 

	UFUNCTION(BlueprintCallable) void Find Closest Player(APawn* Closest Player);
	UFUNCTION(BlueprintCallable) void Spawn Projectile();
	UFUNCTION(BlueprintCallable) void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Proxy_FloorMaker(int32_t EntryPoint);
};

