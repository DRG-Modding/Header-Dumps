// WidgetBlueprintGeneratedClass UI_MissionStats_Categories.UI_MissionStats_Categories_C
// Size: 0x288 (Inherited: 0x230)
struct UUI_MissionStats_Categories_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ArrowButton02_C* ArrowLeft; // 0x238(0x08)
	UBasic_ArrowButton02_C* ArrowRight; // 0x240(0x08)
	UHorizontalBox* CategoryParent; // 0x248(0x08)
	TArray<UTexture2D*> CategoryIcons; // 0x250(0x10)
	TArray<UUI_MissionStats_Category_C*> Widgets; // 0x260(0x10)
	FMulticastInlineDelegate OnSelectedChanged; // 0x270(0x10)
	UUI_MissionStats_Category_C* SelectedCategory; // 0x280(0x08)

	void SelectNext(bool ForwardDirection);
	void Add Vertical Bar();
	void Add Category(UTexture2D* CategoryIcon, bool IsAllCategory, UUI_MissionStats_Category_C* CategoryWidget);
	void GetCategorySelection(TArray<UTexture2D*> Selection);
	void PreConstruct(bool IsDesignTime);
	void Set Categories(TArray<UTexture2D*> CategoryIcons);
	void Setup Widget Events(UUI_MissionStats_Category_C* Widget);
	void On Category Clicked(UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
	void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void ExecuteUbergraph_UI_MissionStats_Categories(int32_t EntryPoint);
	void OnSelectedChanged__DelegateSignature();
};

