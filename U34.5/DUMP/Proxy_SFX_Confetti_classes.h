// BlueprintGeneratedClass Proxy_SFX_Confetti.Proxy_SFX_Confetti_C
// Size: 0x238 (Inherited: 0x220)
struct AProxy_SFX_Confetti_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Sound Finished Event();
	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ExecuteUbergraph_Proxy_SFX_Confetti(int32_t EntryPoint);
};

