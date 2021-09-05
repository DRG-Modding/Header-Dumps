// BlueprintGeneratedClass Proxy_RotateRefinery.Proxy_RotateRefinery_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_RotateRefinery_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	TArray<AActor*> Actors To Rotate; // 0x238(0x10)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ExecuteUbergraph_Proxy_RotateRefinery(int32_t EntryPoint);
};

