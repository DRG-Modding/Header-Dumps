// WidgetBlueprintGeneratedClass W_TabBox.W_TabBox_C
// Size: 0x288 (Inherited: 0x230)
struct UW_TabBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UW_TabButton_C* TabConfig; // 0x238(0x08)
	UW_TabButton_C* TabCreatures; // 0x240(0x08)
	UW_TabButton_C* TabEnvironment; // 0x248(0x08)
	UW_TabButton_C* TabGame; // 0x250(0x08)
	UW_TabButton_C* TabProfiles; // 0x258(0x08)
	UW_TabButton_C* TabResources; // 0x260(0x08)
	UHorizontalBox* TabsBox; // 0x268(0x08)
	UW_TabButton_C* TabTools; // 0x270(0x08)
	FMulticastInlineDelegate On Tab Index Changed; // 0x278(0x10)

	void BndEvt__TabConfig_K2Node_ComponentBoundEvent_0_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabCreatures_K2Node_ComponentBoundEvent_1_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabEnvironment_K2Node_ComponentBoundEvent_2_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabGame_K2Node_ComponentBoundEvent_3_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabResources_K2Node_ComponentBoundEvent_4_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabTools_K2Node_ComponentBoundEvent_5_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void BndEvt__TabProfiles_K2Node_ComponentBoundEvent_6_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	void Event Active Tab Changed(UW_TabButton_C* Tab Button);
	void ExecuteUbergraph_W_TabBox(int32_t EntryPoint);
	void On Tab Index Changed__DelegateSignature(int32_t Index);
};

