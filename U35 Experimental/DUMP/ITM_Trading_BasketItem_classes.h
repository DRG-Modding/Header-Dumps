// WidgetBlueprintGeneratedClass ITM_Trading_BasketItem.ITM_Trading_BasketItem_C
// Size: 0x28b (Inherited: 0x230)
struct UITM_Trading_BasketItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UBorder* Border_ColorGradient; // 0x240(0x08)
	UBorder* Border_Diff; // 0x248(0x08)
	UBorder* Border_Outline; // 0x250(0x08)
	UImage* CreditsDiffIcon; // 0x258(0x08)
	UImage* Icon_Resource_small; // 0x260(0x08)
	UBasic_AnimatedNumber_C* ResourceDiff; // 0x268(0x08)
	UTextBlock* Text_CreditsDiff; // 0x270(0x08)
	UResourceData* Resource; // 0x278(0x08)
	int32_t ChangeAmout; // 0x280(0x04)
	int32_t AmountOwned; // 0x284(0x04)
	bool DoClearAnim; // 0x288(0x01)
	bool DoTradeAnim; // 0x289(0x01)
	bool OutroPlaying; // 0x28a(0x01)

	void PreConstruct(bool IsDesignTime);
	void SetResource(UResourceData* Resource);
	void UpdateNumber(int32_t ChangeAmount, bool DoAnim, bool DoTadeAnim);
	void Construct();
	void OnIntroFinished();
	void ExecuteUbergraph_ITM_Trading_BasketItem(int32_t EntryPoint);
};

