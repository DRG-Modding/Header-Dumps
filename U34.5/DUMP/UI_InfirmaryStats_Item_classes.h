// WidgetBlueprintGeneratedClass UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C
// Size: 0x298 (Inherited: 0x230)
struct UUI_InfirmaryStats_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Icon; // 0x238(0x08)
	UBorder* LineBorder; // 0x240(0x08)
	UTextBlock* TitleText; // 0x248(0x08)
	UTextBlock* TotalText; // 0x250(0x08)
	UMissionStat* Mission Stat; // 0x258(0x08)
	bool IsSelected; // 0x260(0x01)
	FMulticastInlineDelegate OnHoverBegin; // 0x268(0x10)
	FMulticastInlineDelegate OnHoverEnd; // 0x278(0x10)
	UTexture2D* CategoryIcon; // 0x288(0x08)
	AFSDPlayerState* Player State; // 0x290(0x08)

	bool OwnedByLocal();
	AFSDPlayerController* GetPlayer();
	void SetCategoryFilter(TArray<UTexture2D*> Filter);
	void GetMissionStat(UMissionStat* Mission Stat);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Set Selected(bool Selected);
	void MissonStatUpdate(UMissionStat* MissionStat, FText StatValue);
	void ExecuteUbergraph_UI_InfirmaryStats_Item(int32_t EntryPoint);
	void OnHoverEnd__DelegateSignature(UUI_MissionStats_Item_C* Sender);
	void OnHoverBegin__DelegateSignature(UUI_MissionStats_Item_C* Sender);
};

