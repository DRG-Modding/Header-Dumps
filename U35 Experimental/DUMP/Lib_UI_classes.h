// BlueprintGeneratedClass Lib_UI.Lib_UI_C
// Size: 0x28 (Inherited: 0x28)
struct ULib_UI_C : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) FRotator Get Rotator From Spin Boxs(USpinBox* Spin Box X, USpinBox* Spin Box Y, USpinBox* Spin Box Z, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) FVector Get Vector From Spin Boxs(USpinBox* Spin Box X, USpinBox* Spin Box Y, USpinBox* Spin Box Z, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) FString Get Combo Box Value(UComboBoxString* Target, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) FString Get Text Box Value(UEditableTextBox* Target, UObject* __WorldContext);
	UFUNCTION(BlueprintCallable) void Get Spin Box Value(USpinBox* Target, UObject* __WorldContext, float return value);
	UFUNCTION(BlueprintCallable) bool Get Checkbox Value(UCheckBox* Target, UObject* __WorldContext);
};

