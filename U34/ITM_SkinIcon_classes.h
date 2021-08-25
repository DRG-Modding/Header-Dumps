// WidgetBlueprintGeneratedClass ITM_SkinIcon.ITM_SkinIcon_C
// Size: 0x280 (Inherited: 0x230)
struct UITM_SkinIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UImage* DefaultItem; // 0x238(0x08)
	struct USizeBox* IconSizer; // 0x240(0x08)
	struct UImage* PaintBucketOverlay; // 0x248(0x08)
	struct UImage* SkinIcon; // 0x250(0x08)
	struct UItemSkin* Skin; // 0x258(0x08)
	float Size; // 0x260(0x04)
	bool IsLocked; // 0x264(0x01)
	bool IsDefault; // 0x265(0x01)
	bool ShowBucket; // 0x266(0x01)
	char UnknownData_267[0x1]; // 0x267(0x01)
	struct UMaterialInstanceDynamic* Material; // 0x268(0x08)
	struct FLinearColor OutlineTint; // 0x270(0x10)

	void SetBucketVisibility(bool ShowBucket); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetBucketVisibility
	void SetOutlineTint(struct FLinearColor Color); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint
	void GetIsLocked(bool IsLocked); // Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked
	void SetSize(float InSize); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize
	void SetSkin(struct UItemSkin* InSkin, bool InIsLocked, bool InIsDefault); // Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin
	void PreConstruct(bool IsDesignTime); // Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct
	void ExecuteUbergraph_ITM_SkinIcon(int32_t EntryPoint); // Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon
};

