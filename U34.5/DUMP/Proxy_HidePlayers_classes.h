// BlueprintGeneratedClass Proxy_HidePlayers.Proxy_HidePlayers_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_HidePlayers_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	TArray<AActor*> Actors To Hide; // 0x238(0x10)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ExecuteUbergraph_Proxy_HidePlayers(int32_t EntryPoint);
};

