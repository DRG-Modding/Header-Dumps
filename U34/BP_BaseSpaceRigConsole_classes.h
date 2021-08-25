// BlueprintGeneratedClass BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C
// Size: 0x2f0 (Inherited: 0x220)
struct ABP_BaseSpaceRigConsole_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct UTextRenderComponent* TextRender; // 0x230(0x08)
	struct UWidgetComponent* Widget; // 0x238(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x240(0x08)
	struct UBoxComponent* Box; // 0x248(0x08)
	struct UInstantUsable* InstantUsable; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct TArray<struct ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed; // 0x260(0x10)
	struct FString StatCountKey; // 0x270(0x10)
	struct FText ConsoleTitle; // 0x280(0x18)
	struct FText NotificationText; // 0x298(0x18)
	struct UTexture2D* NotificationIcon; // 0x2b0(0x08)
	SoftClassProperty ConsoleWindowClass; // 0x2b8(0x28)
	int32_t Window Z Order; // 0x2e0(0x04)
	bool CreateMenuOnStartup; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	struct UWindowWidget* WindowInstance; // 0x2e8(0x08)

	void ShowNotification(bool IsVisible); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification
	void SetCreateMenuOnStartUp(bool InCreateOnStartUp); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp
	void IsNewPlayer(struct ABP_PlayerController_SpaceRig_C* PlayerController, bool IsNewPlayer); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer
	void UserConstructionScript(); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnOpenConsole(struct ABP_PlayerController_SpaceRig_C* InPlayerController); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole
	void OnWindowCreated(struct UWindowWidget* WindowWidget); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated
	void ExecuteUbergraph_BP_BaseSpaceRigConsole(int32_t EntryPoint); // Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole
};

