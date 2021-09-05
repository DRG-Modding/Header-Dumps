// WidgetBlueprintGeneratedClass HUD_Resources_Team.HUD_Resources_Team_C
// Size: 0x289 (Inherited: 0x230)
struct UHUD_Resources_Team_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Transition; // 0x238(0x08)
	UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single; // 0x240(0x08)
	UVerticalBox* IconParentBottom; // 0x248(0x08)
	UVerticalBox* IconParentTop; // 0x250(0x08)
	UBorder* SplitterBar; // 0x258(0x08)
	UTextBlock* TEXT_Empty; // 0x260(0x08)
	UTextBlock* TEXT_Header; // 0x268(0x08)
	APlayerCharacter* Character; // 0x270(0x08)
	UResourcesComponent* ResourceComponent; // 0x278(0x08)
	bool DoIntroAnim; // 0x280(0x01)
	int32_t WidgetHideLock; // 0x284(0x04)
	bool Pinging; // 0x288(0x01)

	void IsObjectiveResource(UCappedResource* InResource, bool IsObjective, UCappedResource* OutResource);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Add Resource(UCappedResource* Resource);
	void Show Widget();
	void Hide Widget();
	void Ping Widget();
	void OnTransitionFinished();
	void OnDepositingEnd_Event(UResourceBank* ResourceBank);
	void OnDepositingBegin_Event(UResourceBank* ResourceBank);
	void OnResourceChanged_Event(UCappedResource* Resource, float amount);
	void OnResourceAdded(UCappedResource* Resource);
	void OnToggleOutline_Event(bool Visible);
	void ExecuteUbergraph_HUD_Resources_Team(int32_t EntryPoint);
};

