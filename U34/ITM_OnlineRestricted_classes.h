// WidgetBlueprintGeneratedClass ITM_OnlineRestricted.ITM_OnlineRestricted_C
// Size: 0x269 (Inherited: 0x230)
struct UITM_OnlineRestricted_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UButton* OnlinePlayRestricted; // 0x238(0x08)
	struct UVerticalBox* OnlineRestrictedDescBox; // 0x240(0x08)
	struct UImage* PlusIcon; // 0x248(0x08)
	struct UTextBlock* RestrictionDescription; // 0x250(0x08)
	struct UWidgetSwitcher* RestrictionReasonSwitch; // 0x258(0x08)
	struct UVerticalBox* VboxSubscriptionRequired; // 0x260(0x08)
	enum class EBlueprintablePrivilegeResults CurrentOnlineBlockingReason; // 0x268(0x01)

	void Should Show Online Restriction(bool Should Show); // Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Should Show Online Restriction
	void Construct(); // Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.Construct
	void On Privilege Result(struct APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult); // Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.On Privilege Result
	void BndEvt__OnlinePlayRestricted_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature(); // Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.BndEvt__OnlinePlayRestricted_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_ITM_OnlineRestricted(int32_t EntryPoint); // Function ITM_OnlineRestricted.ITM_OnlineRestricted_C.ExecuteUbergraph_ITM_OnlineRestricted
};

