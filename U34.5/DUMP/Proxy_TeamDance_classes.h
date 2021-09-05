// BlueprintGeneratedClass Proxy_TeamDance.Proxy_TeamDance_C
// Size: 0x23c (Inherited: 0x220)
struct AProxy_TeamDance_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	int32_t NewVar_1; // 0x238(0x04)

	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Proxy_TeamDance(int32_t EntryPoint);
};

