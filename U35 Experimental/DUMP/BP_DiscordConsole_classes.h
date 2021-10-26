// BlueprintGeneratedClass BP_DiscordConsole.BP_DiscordConsole_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_DiscordConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Cube1; // 0x228(0x08)
	UBP_DiscordInstantUsable_C* BP_DiscordInstantUsable; // 0x230(0x08)
	UBoxComponent* ProxmityTrigger; // 0x238(0x08)
	UWidgetComponent* PSA; // 0x240(0x08)
	UBoxComponent* Box; // 0x248(0x08)
	UWidgetComponent* Widget; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	float LastUpdate; // 0x260(0x04)
	bool IsUserIn; // 0x264(0x01)
	int32_t OverlapCount; // 0x268(0x04)
	UConsole_DiscordScreen_C* DiscordConsole; // 0x270(0x08)
	ABP_PlayerController_SpaceRig_C* Player; // 0x278(0x08)

	void ValidGetPlayer(ABP_PlayerController_SpaceRig_C* Player);
	void SetUsable(bool Usable);
	void Answer(bool Yes);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserIn(bool isInServer);
	void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void RefreshUsable();
	void OnUsedClient(ABP_PlayerControllerBase_C* User);
	void callRefreshUsable();
	void BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void ExecuteUbergraph_BP_DiscordConsole(int32_t EntryPoint);
};

