// BlueprintGeneratedClass Proxy_FloorMaker.Proxy_FloorMaker_C
// Size: 0x248 (Inherited: 0x220)
struct AProxy_FloorMaker_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UProxyAssetComponent_C* ProxyAssetComponent; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	int32_t Platform Count; // 0x238(0x04)
	float Projectile Interval; // 0x23c(0x04)
	FTimerHandle Spawn Timer; // 0x240(0x08)

	void Find Closest Player(APawn* Closest Player);
	void Spawn Projectile();
	void BndEvt__ProxyAssetComponent_K2Node_ComponentBoundEvent_0_On Proxy Activated__DelegateSignature();
	void ExecuteUbergraph_Proxy_FloorMaker(int32_t EntryPoint);
};

