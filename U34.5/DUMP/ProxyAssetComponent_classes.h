// BlueprintGeneratedClass ProxyAssetComponent.ProxyAssetComponent_C
// Size: 0xe8 (Inherited: 0xb0)
struct UProxyAssetComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	FMulticastInlineDelegate On Actor Spawned; // 0xb8(0x10)
	TArray<AActor*> Registered Actors; // 0xc8(0x10)
	FMulticastInlineDelegate On Proxy Activated; // 0xd8(0x10)

	void Activate Proxy();
	void Register New Actor(AActor* New Actor);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Register Actor Destroyed Event(AActor* Actor);
	void Registered Actor Destroyed Event(AActor* DestroyedActor);
	void Component Added To Owner Event(UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_ProxyAssetComponent(int32_t EntryPoint);
	void On Proxy Activated__DelegateSignature();
	void On Actor Spawned__DelegateSignature(AActor* Actor);
};

