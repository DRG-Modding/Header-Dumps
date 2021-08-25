// WidgetBlueprintGeneratedClass ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C
// Size: 0x2b0 (Inherited: 0x230)
struct UITM_DeepDives_ServerList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_ScrollBarBox_C* Basic_ScrollBarBox; // 0x238(0x08)
	struct UBorder* HeaderBorder; // 0x240(0x08)
	struct UVerticalBox* ItemsList; // 0x248(0x08)
	struct UBorder* LockBorder; // 0x250(0x08)
	struct URichTextBlock* RichTextBlock_238; // 0x258(0x08)
	struct UVerticalBox* SearchingVBox; // 0x260(0x08)
	struct USizeBox* Size_Distance; // 0x268(0x08)
	struct USizeBox* Size_Mission; // 0x270(0x08)
	struct USizeBox* Size_Team; // 0x278(0x08)
	struct UTextBlock* TXT_Category_Distance; // 0x280(0x08)
	struct UTextBlock* TXT_Category_MissionType; // 0x288(0x08)
	struct UTextBlock* TXT_Category_Team; // 0x290(0x08)
	bool ShowHardDeepDives; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	int32_t UpdateIndex; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnJoinServer; // 0x2a0(0x10)

	void UpdateLocked(); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
	void JoinServer(struct FBlueprintSessionResult InSession); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
	void FinishUpdate(); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
	void UpdateServer(struct FBlueprintSessionResult ServerInfo); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
	void BeginUpdate(); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
	void PreConstruct(bool IsDesignTime); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
	void Construct(); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
	void OnIsUGCAllowed(struct APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnIsUGCAllowed
	void ExecuteUbergraph_ITM_DeepDives_ServerList(int32_t EntryPoint); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
	void OnJoinServer__DelegateSignature(struct FBlueprintSessionResult Session); // Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
};

