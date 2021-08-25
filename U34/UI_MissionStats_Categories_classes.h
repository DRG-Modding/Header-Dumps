// WidgetBlueprintGeneratedClass UI_MissionStats_Categories.UI_MissionStats_Categories_C
// Size: 0x288 (Inherited: 0x230)
struct UUI_MissionStats_Categories_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ArrowButton02_C* ArrowLeft; // 0x238(0x08)
	struct UBasic_ArrowButton02_C* ArrowRight; // 0x240(0x08)
	struct UHorizontalBox* CategoryParent; // 0x248(0x08)
	struct TArray<struct UTexture2D*> CategoryIcons; // 0x250(0x10)
	struct TArray<struct UUI_MissionStats_Category_C*> Widgets; // 0x260(0x10)
	struct FMulticastInlineDelegate OnSelectedChanged; // 0x270(0x10)
	struct UUI_MissionStats_Category_C* SelectedCategory; // 0x280(0x08)

	void SelectNext(bool ForwardDirection); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
	void Add Vertical Bar(); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
	void Add Category(struct UTexture2D* CategoryIcon, bool IsAllCategory, struct UUI_MissionStats_Category_C* CategoryWidget); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
	void GetCategorySelection(struct TArray<struct UTexture2D*> Selection); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
	void PreConstruct(bool IsDesignTime); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
	void Set Categories(struct TArray<struct UTexture2D*> CategoryIcons); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
	void Setup Widget Events(struct UUI_MissionStats_Category_C* Widget); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
	void On Category Clicked(struct UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
	void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	void ExecuteUbergraph_UI_MissionStats_Categories(int32_t EntryPoint); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
	void OnSelectedChanged__DelegateSignature(); // Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
};

