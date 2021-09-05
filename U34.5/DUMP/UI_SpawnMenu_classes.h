// WidgetBlueprintGeneratedClass UI_SpawnMenu.UI_SpawnMenu_C
// Size: 0x4a0 (Inherited: 0x230)
struct UUI_SpawnMenu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UCheckBox* AllowInSpaceRig_CheckBox; // 0x238(0x08)
	USpinBox* AutoPauseQueue_SpinBox; // 0x240(0x08)
	UW_Button_Slim_C* ButtonResetHUD; // 0x248(0x08)
	UW_SpawnList_C* CreaturesSpawnList; // 0x250(0x08)
	USpinBox* Delay_SpinBox; // 0x258(0x08)
	UW_Button_C* DeleteButton; // 0x260(0x08)
	UW_Button_C* DuplicateButton; // 0x268(0x08)
	UW_ProfileEditForm_C* EditProfileWidget; // 0x270(0x08)
	UCheckBox* EnableChatSpawnNotificationsCheckbox; // 0x278(0x08)
	UCheckBox* EnableNaturalSpawningCheckbox; // 0x280(0x08)
	UW_SpawnList_C* EnvironmentSpawnList; // 0x288(0x08)
	UW_SpawnList_C* GameSpawnList; // 0x290(0x08)
	UCheckBox* InteractivityEnabled_CheckBox; // 0x298(0x08)
	USpinBox* LifeTime_SpinBox; // 0x2a0(0x08)
	UCheckBox* LoadoutA_CheckBox; // 0x2a8(0x08)
	UCheckBox* LoadoutB_CheckBox; // 0x2b0(0x08)
	UCheckBox* LoadoutC_CheckBox; // 0x2b8(0x08)
	USpinBox* MaxCrittersSpinBox; // 0x2c0(0x08)
	USpinBox* MaxDistance_SpinBox; // 0x2c8(0x08)
	USpinBox* MaxEnemiesSpinBox; // 0x2d0(0x08)
	USpinBox* MaxSlope_SpinBox; // 0x2d8(0x08)
	USpinBox* MaxSwarmersSpinBox; // 0x2e0(0x08)
	USpinBox* MinDistance_SpinBox; // 0x2e8(0x08)
	USpinBox* MinSlope_SpinBox; // 0x2f0(0x08)
	UW_Button_C* NewProfileButton; // 0x2f8(0x08)
	USpinBox* OffsetX_SpinBox; // 0x300(0x08)
	USpinBox* OffsetY_SpinBox; // 0x308(0x08)
	USpinBox* OffsetZ_SpinBox; // 0x310(0x08)
	UCheckBox* OnAll_Checkbox; // 0x318(0x08)
	UCheckBox* OnDriller_Checkbox; // 0x320(0x08)
	UCheckBox* OnEngineer_Checkbox; // 0x328(0x08)
	UCheckBox* OnGunner_CheckBox; // 0x330(0x08)
	UCheckBox* OnHost_CheckBox; // 0x338(0x08)
	UCheckBox* OnlyAllowUserDespawn_CheckBox; // 0x340(0x08)
	UCheckBox* OnRandom_Checkbox; // 0x348(0x08)
	UCheckBox* OnScout_CheckBox; // 0x350(0x08)
	UScrollBox* ProfileGroups; // 0x358(0x08)
	UWidgetSwitcher* ProfileSwitcher; // 0x360(0x08)
	USpinBox* QueueInterval_SpinBox; // 0x368(0x08)
	USpinBox* QueueIntialDelay_SpinBox; // 0x370(0x08)
	UW_SpawnList_C* ResourcesSpawnList; // 0x378(0x08)
	USpinBox* RotationX_SpinBox; // 0x380(0x08)
	USpinBox* RotationY_SpinBox; // 0x388(0x08)
	USpinBox* RotationZ_SpinBox; // 0x390(0x08)
	UW_Button_C* SaveButton; // 0x398(0x08)
	USpinBox* ScaleX_SpinBox; // 0x3a0(0x08)
	USpinBox* ScaleY_SpinBox; // 0x3a8(0x08)
	USpinBox* ScaleZ_SpinBox; // 0x3b0(0x08)
	UCheckBox* ShowNotifications_CheckBox; // 0x3b8(0x08)
	USpinBox* SpawnCount_SpinBox; // 0x3c0(0x08)
	UW_TabBox_C* Tabs; // 0x3c8(0x08)
	UWidgetSwitcher* TabsSwitcher; // 0x3d0(0x08)
	UW_SpawnList_C* ToolsSpawnList; // 0x3d8(0x08)
	UEditableTextBox* TwitchUrlTextbox; // 0x3e0(0x08)
	UW_Button_Slim_C* W_Button_Basic2_Slim; // 0x3e8(0x08)
	UW_TitleBar_C* W_GroupSeparator; // 0x3f0(0x08)
	UW_TitleBar_C* W_GroupSeparator_34; // 0x3f8(0x08)
	UW_TitleBar_C* W_GroupSeparator_35; // 0x400(0x08)
	UW_TitleBar_C* W_GroupSeparator_38; // 0x408(0x08)
	FMulticastInlineDelegate On Settings Changed; // 0x410(0x10)
	USpawnMenuSettingsSave_C* Settings Save Game; // 0x420(0x08)
	FMulticastInlineDelegate On Interactivity Enabled Changed; // 0x428(0x10)
	FMulticastInlineDelegate On Queue Interval Changed; // 0x438(0x10)
	FMulticastInlineDelegate On Spawn Profile Group; // 0x448(0x10)
	TArray<FString> Expanded Groups; // 0x458(0x10)
	FMulticastInlineDelegate On Kill All Enemies; // 0x468(0x10)
	FMulticastInlineDelegate On Spawn Requested; // 0x478(0x10)
	FMulticastInlineDelegate On Cull Requested; // 0x488(0x10)
	UW_ProfileGroup_C* Profile Group Class; // 0x498(0x08)

	void Close Profile Editor();
	void Open Profile Editor(FGuid Profile ID);
	void Recalculate Profile Entries Random Percentage();
	void Add Profile Entry(UW_ProfileGroup_C* Profile Group Widget, FSpawnProfile SpawnProfile);
	void Sort Profiles Alphabetically(TArray<FSpawnProfile> Profiles);
	void Update Profile(FSpawnProfile Updated Profile);
	void Get Group Names(TArray<FString> Group Names);
	void Get Profiles By Name(FString Name, TArray<FSpawnProfile> Out Profiles);
	void Create New Profile(FString Name, FSpawnProfile SpawnProfile);
	void Clear Groups();
	void Expand Groups();
	void Expand Group(FString Group Name, bool Is Expanded);
	void Get Group(FString Group Name, bool Found, UW_ProfileGroup_C* Profile Group Widget);
	void Add Group(FString Name, UW_ProfileGroup_C* Profile Group Widget);
	void Build Profile Groups();
	void Set Settings(USpawnMenuSettingsSave_C* Settings);
	void Get Settings(USpawnMenuSettingsSave_C* Settings);
	void BndEvt__SpawnCount_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MinDistance_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MaxDistance_SpinBox_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MinSlope_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MaxSlope_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__ScaleX_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__ScaleY_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__ScaleZ_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__OffsetX_SpinBox_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__OffsetY_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__OffsetZ_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__Delay_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__LifeTime_SpinBox_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__OnHost_CheckBox_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnScout_CheckBox_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnGunner_CheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnDriller_Checkbox_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnEngineer_Checkbox_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnRandom_Checkbox_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__OnAll_Checkbox_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Despawn_CheckBox_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__RotationX_SpinBox_K2Node_ComponentBoundEvent_42_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__RotationY_SpinBox_K2Node_ComponentBoundEvent_43_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__RotationZ_SpinBox_K2Node_ComponentBoundEvent_44_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__PreventSpawnsCheckBox_K2Node_ComponentBoundEvent_45_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__InteractivityEnabled_CheckBox_K2Node_ComponentBoundEvent_46_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__AllowInSpaceRig_CheckBox_K2Node_ComponentBoundEvent_47_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowNotifications_CheckBox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__QueueInterval_SpinBox_K2Node_ComponentBoundEvent_49_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__QueueIntialDelay_SpinBox_K2Node_ComponentBoundEvent_50_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void Profile Entry Edit Button Clicked Event(FGuid Profile ID);
	void BndEvt__W_Button_Basic2_K2Node_ComponentBoundEvent_55_On Button Clicked__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_56_On Button Clicked__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_On Button Clicked__DelegateSignature();
	void BndEvt__AutoPauseQueue_SpinBox_K2Node_ComponentBoundEvent_24_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__DuplicateButton_K2Node_ComponentBoundEvent_29_On Button Clicked__DelegateSignature();
	void Group Expand Changed Event(FString Group Name, bool Is Expanded);
	void Group Spawn Event(FString Group Name);
	void Group Add Event(FString Profile Name);
	void BndEvt__LoadoutA_CheckBox_K2Node_ComponentBoundEvent_30_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__LoadoutB_CheckBox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__LoadoutC_CheckBox_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MaxCrittersSpinBox_K2Node_ComponentBoundEvent_33_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MaxSwarmersSpinBox_K2Node_ComponentBoundEvent_34_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__MaxEnemiesSpinBox_K2Node_ComponentBoundEvent_35_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__W_Button_Basic2_Slim_K2Node_ComponentBoundEvent_36_On Button Clicked__DelegateSignature();
	void BndEvt__TwitchUrlTextbox_K2Node_ComponentBoundEvent_37_OnEditableTextBoxCommittedEvent__DelegateSignature(FText Text, enum class ETextCommit CommitMethod);
	void BndEvt__CreaturesSpawnList_K2Node_ComponentBoundEvent_0_On Spawn Requested__DelegateSignature(FName Object ID);
	void BndEvt__CreaturesSpawnList_K2Node_ComponentBoundEvent_1_On Cull Requested__DelegateSignature(FName Object ID);
	void BndEvt__EnvironmentSpawnList_K2Node_ComponentBoundEvent_2_On Spawn Requested__DelegateSignature(FName Object ID);
	void BndEvt__EnvironmentSpawnList_K2Node_ComponentBoundEvent_3_On Cull Requested__DelegateSignature(FName Object ID);
	void BndEvt__GameSpawnList_K2Node_ComponentBoundEvent_26_On Spawn Requested__DelegateSignature(FName Object ID);
	void BndEvt__GameSpawnList_K2Node_ComponentBoundEvent_27_On Cull Requested__DelegateSignature(FName Object ID);
	void BndEvt__ResourcesSpawnList_K2Node_ComponentBoundEvent_28_On Spawn Requested__DelegateSignature(FName Object ID);
	void BndEvt__ResourcesSpawnList_K2Node_ComponentBoundEvent_38_On Cull Requested__DelegateSignature(FName Object ID);
	void BndEvt__ToolsSpawnList_K2Node_ComponentBoundEvent_39_On Spawn Requested__DelegateSignature(FName Object ID);
	void BndEvt__ToolsSpawnList_K2Node_ComponentBoundEvent_40_On Cull Requested__DelegateSignature(FName Object ID);
	void BndEvt__Tabs_K2Node_ComponentBoundEvent_41_On Tab Index Changed__DelegateSignature(int32_t Index);
	void BndEvt__EnableChatSpawnNotificationsCheckbox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Profile Group Added Event(UW_ProfileGroup_C* Profile Group Widget);
	void Profile Entry Added Event(UW_ProfileEntry_C* Profile Entry Widget);
	void BndEvt__ButtonResetHUD_K2Node_ComponentBoundEvent_52_On Button Clicked__DelegateSignature();
	void ExecuteUbergraph_UI_SpawnMenu(int32_t EntryPoint);
	void On Cull Requested__DelegateSignature(FName Object ID);
	void On Spawn Requested__DelegateSignature(FName Object ID);
	void On Kill All Enemies__DelegateSignature();
	void On Spawn Profile Group__DelegateSignature(FString Group Name);
	void On Queue Interval Changed__DelegateSignature();
	void On Interactivity Enabled Changed__DelegateSignature(bool Is Interactivity Enabled);
	void On Settings Changed__DelegateSignature();
};

