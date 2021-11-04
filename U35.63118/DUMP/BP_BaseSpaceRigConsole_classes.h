// BlueprintGeneratedClass BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C
// Size: 0x2f0 (Inherited: 0x220)
struct ABP_BaseSpaceRigConsole_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UTextRenderComponent* TextRender; // 0x230(0x08)
	UWidgetComponent* Widget; // 0x238(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x240(0x08)
	UBoxComponent* Box; // 0x248(0x08)
	UInstantUsable* InstantUsable; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x260(0x10)
	FString StatCountKey; // 0x270(0x10)
	FText ConsoleTitle; // 0x280(0x18)
	FText NotificationText; // 0x298(0x18)
	UTexture2D* NotificationIcon; // 0x2b0(0x08)
	TSoftClassPtr<UObject> ConsoleWindowClass; // 0x2b8(0x28)
	int32_t Window Z Order; // 0x2e0(0x04)
	bool CreateMenuOnStartup; // 0x2e4(0x01)
	UWindowWidget* WindowInstance; // 0x2e8(0x08)

	void ShowNotification(bool IsVisible);
	void SetCreateMenuOnStartUp(bool InCreateOnStartUp);
	void IsNewPlayer(ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void OnOpenConsole(ABP_PlayerController_SpaceRig_C* InPlayerController);
	void OnWindowCreated(UWindowWidget* WindowWidget);
	void PIE_QuickUse();
	void ExecuteUbergraph_BP_BaseSpaceRigConsole(int32_t EntryPoint);
};

