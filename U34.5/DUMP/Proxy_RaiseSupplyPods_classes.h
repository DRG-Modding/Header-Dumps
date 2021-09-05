// BlueprintGeneratedClass Proxy_RaiseSupplyPods.Proxy_RaiseSupplyPods_C
// Size: 0x250 (Inherited: 0x220)
struct AProxy_RaiseSupplyPods_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	TArray<AActor*> Actors To Sink; // 0x238(0x10)
	AActor* Class Filter; // 0x248(0x08)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Proxy_RaiseSupplyPods(int32_t EntryPoint);
};

