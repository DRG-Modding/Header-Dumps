// WidgetBlueprintGeneratedClass TOOLTIP_Mod_Joining.TOOLTIP_Mod_Joining_C
// Size: 0x2d8 (Inherited: 0x230)
struct UTOOLTIP_Mod_Joining_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Label_C* Mod_ApprovalStatus_Text; // 0x238(0x08)
	UBasic_Label_C* Mod_Author_Text; // 0x240(0x08)
	UBasic_Label_C* Mod_Description_Text; // 0x248(0x08)
	UBasic_Label_C* Mod_Name_Text; // 0x250(0x08)
	UImage* Mod_Thumbnail_Image; // 0x258(0x08)
	UBasic_Label_C* Mod_Version_Text; // 0x260(0x08)
	FString ModId; // 0x268(0x10)
	FString Name; // 0x278(0x10)
	FString Version; // 0x288(0x10)
	FString Description; // 0x298(0x10)
	FString Author; // 0x2a8(0x10)
	enum class EUGCApprovalStatus ApprovalState; // 0x2b8(0x01)
	UModioModInfoWrapper* MetaData; // 0x2c0(0x08)
	FString ThumbnailID; // 0x2c8(0x10)

	void SetData(FString InModID, FString InName, FString InVersion, FString InDescription, FString InAuthor, enum class EUGCApprovalStatus InApprovalState, bool InFetchThumbnail);
	void FromMetaData(UModioModInfoWrapper* InMetaData);
	void PreConstruct(bool IsDesignTime);
	void LoadThumbnail();
	void ExecuteUbergraph_TOOLTIP_Mod_Joining(int32_t EntryPoint);
};

