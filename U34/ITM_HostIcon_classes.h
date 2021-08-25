// WidgetBlueprintGeneratedClass ITM_HostIcon.ITM_HostIcon_C
// Size: 0x254 (Inherited: 0x230)
struct UITM_HostIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* BG_Host; // 0x238(0x08)
	struct UImage* Icon_Host; // 0x240(0x08)
	struct USizeBox* SizeBox_1; // 0x248(0x08)
	float Size; // 0x250(0x04)

	void SetSize(float Size); // Function ITM_HostIcon.ITM_HostIcon_C.SetSize
	void PreConstruct(bool IsDesignTime); // Function ITM_HostIcon.ITM_HostIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_HostIcon(int32_t EntryPoint); // Function ITM_HostIcon.ITM_HostIcon_C.ExecuteUbergraph_ITM_HostIcon
};

