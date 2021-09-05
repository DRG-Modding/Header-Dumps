// BlueprintGeneratedClass TwitchManagerComponent.TwitchManagerComponent_C
// Size: 0x124 (Inherited: 0xb0)
struct UTwitchManagerComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	FString Save Location; // 0xb8(0x10)
	UInteractivityQueueSave_C* Queue Save Class; // 0xc8(0x08)
	USaveGame* Queue Save Game; // 0xd0(0x08)
	FTimerHandle Queue Timer; // 0xd8(0x08)
	bool Queue Allowed in SpaceRig; // 0xe0(0x01)
	int32_t Queue Auto Pause Player Count; // 0xe4(0x04)
	float Nameplate Rendering Interval; // 0xe8(0x04)
	FTimerHandle Nameplate Rendering Timer; // 0xf0(0x08)
	AActor* Nameplate View Target; // 0xf8(0x08)
	FMulticastInlineDelegate On Viewer Redeem; // 0x100(0x10)
	float Nameplate Max Render Distance; // 0x110(0x04)
	FLinearColor Default Color; // 0x114(0x10)

	void Set Nameplate Rendering Enabled(UNameplateComponent_C* Nameplate, bool Enabled);
	bool Is In Rendering Range(UNameplateComponent_C* Nameplate);
	bool Can Process Queue();
	bool Is Auto Pause Queue Active();
	void Stop Queue();
	void Start Queue(bool Queue Allowed in SpaceRig, int32_t Auto Pause Player Count, float Interval, float Start Delay);
	void ReceiveBeginPlay();
	void Queue Started Event(float Interval, float Start Delay);
	void Begin Next Queue Event();
	void Begin Nameplate Scan Event();
	void Nameplate Rendering Started Event();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_TwitchManagerComponent(int32_t EntryPoint);
	void On Viewer Redeem__DelegateSignature(FString Profile, FString Viewer Name, FString Optional Message);
};

