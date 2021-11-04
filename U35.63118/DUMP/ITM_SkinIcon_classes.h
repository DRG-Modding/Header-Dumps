// WidgetBlueprintGeneratedClass ITM_SkinIcon.ITM_SkinIcon_C
// Size: 0x28a (Inherited: 0x230)
struct UITM_SkinIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* DefaultItem; // 0x238(0x08)
	UUI_DLC_Indicator_C* DLC_Indicator; // 0x240(0x08)
	USizeBox* IconSizer; // 0x248(0x08)
	UImage* PaintBucketOverlay; // 0x250(0x08)
	UImage* SkinIcon; // 0x258(0x08)
	UItemSkin* Skin; // 0x260(0x08)
	float Size; // 0x268(0x04)
	bool IsLocked; // 0x26c(0x01)
	bool IsDefault; // 0x26d(0x01)
	bool ShowBucket; // 0x26e(0x01)
	UMaterialInstanceDynamic* Material; // 0x270(0x08)
	FLinearColor OutlineTint; // 0x278(0x10)
	enum class ENUM_SkinWidgetTypes BucketIcon; // 0x288(0x01)
	bool ShowDLC; // 0x289(0x01)

	void SetIconColor(FLinearColor InColorAndOpacity);
	void SetBucketVisibility(bool ShowBucket);
	void SetOutlineTint(FLinearColor Color);
	void GetIsLocked(bool IsLocked);
	void SetSize(float InSize);
	void SetFromMaterial(UMaterialInterface* inMaterial, bool inIsLocked, bool InIsDefault, enum class ENUM_SkinWidgetTypes InBucketIcon);
	void SetSkin(UItemSkin* InSkin, bool inIsLocked, bool InIsDefault);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_SkinIcon(int32_t EntryPoint);
};

