// WidgetBlueprintGeneratedClass ITM_DeepDives_Start.ITM_DeepDives_Start_C
// Size: 0x290 (Inherited: 0x230)
struct UITM_DeepDives_Start_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_DeepDives_Launcher_C* Hard_Launcher; // 0x238(0x08)
	UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x240(0x08)
	UITM_ServerList_Warning_C* ITM_ServerList_Warning; // 0x248(0x08)
	UITM_DeepDives_Launcher_C* Normal_Launcher; // 0x250(0x08)
	UBasic_RadioButton_C* OptionPrivate; // 0x258(0x08)
	UBasic_RadioButton_C* OptionPublic; // 0x260(0x08)
	UBasic_RadioButton_C* OptionSolo; // 0x268(0x08)
	UBasic_PasswordField_C* PasswordField; // 0x270(0x08)
	FMulticastInlineDelegate OnJoinMission; // 0x278(0x10)
	FTimerHandle DeepDivesServerTimeout; // 0x288(0x08)

	void HandleKeyDown(FKeyEvent KeyEvent, bool OutHandled, FEventReply OutReply);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void UpdateOptions();
	void OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5();
	void OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5();
	void OnFailure_14795847495E51F942775B86C1C4BCCF();
	void OnSuccess_14795847495E51F942775B86C1C4BCCF();
	void BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void Start Mission(UDeepDive* mission);
	void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(UDeepDive* DeepDive);
	void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(UDeepDive* DeepDive);
	void Open();
	void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool EliteDeepDive);
	void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool EliteDeepDive);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature(bool success);
	void OnTimeout();
	void RefreshTimeout(bool success);
	void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature(bool success);
	void ExecuteUbergraph_ITM_DeepDives_Start(int32_t EntryPoint);
	void OnJoinMission__DelegateSignature(bool EliteDeepDive);
};

