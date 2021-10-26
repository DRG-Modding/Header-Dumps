// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_DeepDives_ServerList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x238(0x08)
	UBorder* HeaderBorder; // 0x240(0x08)
	UVerticalBox* ItemsList; // 0x248(0x08)
	UBorder* LockBorder; // 0x250(0x08)
	URichTextBlock* RichTextBlock_238; // 0x258(0x08)
	UVerticalBox* SearchingVBox; // 0x260(0x08)
	USizeBox* Size_Distance; // 0x268(0x08)
	USizeBox* Size_Mission; // 0x270(0x08)
	USizeBox* Size_Team; // 0x278(0x08)
	UTextBlock* TXT_Category_Distance; // 0x280(0x08)
	UTextBlock* TXT_Category_MissionType; // 0x288(0x08)
	UTextBlock* TXT_Category_Team; // 0x290(0x08)
	bool ShowHardDeepDives; // 0x298(0x01)
	int32_t UpdateIndex; // 0x29c(0x04)
	FMulticastInlineDelegate OnJoinServer; // 0x2a0(0x10)

	void UpdateLocked();
	void JoinServer(FBlueprintSessionResult InSession);
	void FinishUpdate();
	void UpdateServer(FBlueprintSessionResult ServerInfo);
	void BeginUpdate();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnIsUGCAllowed(APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult);
	void ExecuteUbergraph_ITM_DeepDives_ServerList(int32_t EntryPoint);
	void OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

