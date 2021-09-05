// WidgetBlueprintGeneratedClass ITM_OnlineRestricted.ITM_OnlineRestricted_C
// Size: 0x269 (Inherited: 0x230)
struct UITM_OnlineRestricted_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* OnlinePlayRestricted; // 0x238(0x08)
	UVerticalBox* OnlineRestrictedDescBox; // 0x240(0x08)
	UImage* PlusIcon; // 0x248(0x08)
	UTextBlock* RestrictionDescription; // 0x250(0x08)
	UWidgetSwitcher* RestrictionReasonSwitch; // 0x258(0x08)
	UVerticalBox* VboxSubscriptionRequired; // 0x260(0x08)
	enum class EBlueprintablePrivilegeResults CurrentOnlineBlockingReason; // 0x268(0x01)

	void Should Show Online Restriction(bool Should Show);
	void Construct();
	void On Privilege Result(APlayerState* CheckedPlayerState, enum class EBlueprintableUserPrivileges CheckedPrivilege, enum class EBlueprintablePrivilegeResults PrivilegeResult);
	void BndEvt__OnlinePlayRestricted_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_OnlineRestricted(int32_t EntryPoint);
};

