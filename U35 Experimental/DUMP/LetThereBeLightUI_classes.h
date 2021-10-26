// WidgetBlueprintGeneratedClass LetThereBeLightUI.LetThereBeLightUI_C
// Size: 0x288 (Inherited: 0x230)
struct ULetThereBeLightUI_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UImage* 1stHorizontal; 
	UPROPERTY(BlueprintReadWrite) UImage* 1stRowBackground; 
	UPROPERTY(BlueprintReadWrite) UImage* 2ndHorizontal; 
	UPROPERTY(BlueprintReadWrite) UImage* 3rdHorizontal; 
	UPROPERTY(BlueprintReadWrite) UThrobber* AnimatedFlares; 
	UPROPERTY(BlueprintReadWrite) UImage* CenterFlare; 
	UPROPERTY(BlueprintReadWrite) UImage* LeftVertical; 
	UPROPERTY(BlueprintReadWrite) UImage* RightVertical; 
	UPROPERTY(BlueprintReadWrite) UCheckBox* ToggleLightBox; 
	UPROPERTY(BlueprintReadWrite) AMod040_C* Let There Be Light; 

	UFUNCTION(BlueprintCallable) void BndEvt__ToggleChristmas_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_LetThereBeLightUI(int32_t EntryPoint);
};

