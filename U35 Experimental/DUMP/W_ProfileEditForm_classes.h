// WidgetBlueprintGeneratedClass W_ProfileEditForm.W_ProfileEditForm_C
// Size: 0x3b0 (Inherited: 0x230)
struct UW_ProfileEditForm_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* ChainProfileTextBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* Delay_SpinBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* DespawnChainTextbox; 
	UPROPERTY(BlueprintReadWrite) UComboBoxString* GameObjectCombobox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* LifeTime_SpinBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* LoadoutA_CheckBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* LoadoutB_CheckBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* LoadoutC_CheckBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* MaxDistance_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* MaxSlope_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* MinDistance_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* MineralChunkValueSpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* MinSlope_SpinBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* NameplateColorTextbox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* NameplateHeight_SpinBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* NameplateMsgTextBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* NameplateTextBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* NotificationTextBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* OffsetV_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* OffsetX_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* OffsetY_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* OffsetZ_SpinBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnAll_Checkbox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnDriller_Checkbox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnEngineer_Checkbox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnGunner_CheckBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnHost_CheckBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnRandom_Checkbox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* OnScout_CheckBox; 
	UPROPERTY(BlueprintReadWrite) UEditableTextBox* ProfileNameTextBox; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* Random_CheckBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* Rerolls_Spinbox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* RotationV_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* RotationX_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* RotationY_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* RotationZ_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* ScaleV_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* ScaleX_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* ScaleY_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* ScaleZ_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* SpawnCount_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* SpawnCountV_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* TimeDilation_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* TimeDilationVariance_SpinBox; 
	UPROPERTY(BlueprintReadWrite) USpinBox* Weight_Spinbox; 
	UPROPERTY(BlueprintReadWrite) FGuid Profile ID; 

	UFUNCTION(BlueprintCallable) void Set Profile(FSpawnProfile Spawn Profile);
	UFUNCTION(BlueprintCallable) void Get Profile(FSpawnProfile Profile);
	UFUNCTION(BlueprintCallable) void OnInitialized();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_ProfileEditForm(int32_t EntryPoint);
};

