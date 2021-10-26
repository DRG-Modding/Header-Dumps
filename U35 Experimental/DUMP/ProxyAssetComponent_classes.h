// BlueprintGeneratedClass ProxyAssetComponent.ProxyAssetComponent_C
// Size: 0xe8 (Inherited: 0xb0)
struct UProxyAssetComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Actor Spawned; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Registered Actors; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Proxy Activated; 

	UFUNCTION(BlueprintCallable) void Activate Proxy();
	UFUNCTION(BlueprintCallable) void Register New Actor(AActor* New Actor);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void Register Actor Destroyed Event(AActor* Actor);
	UFUNCTION(BlueprintCallable) void Registered Actor Destroyed Event(AActor* DestroyedActor);
	UFUNCTION(BlueprintCallable) void Component Added To Owner Event(UActorComponent* Component, bool bReset);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ProxyAssetComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Proxy Activated__DelegateSignature();
	UFUNCTION(BlueprintCallable) void On Actor Spawned__DelegateSignature(AActor* Actor);
};

